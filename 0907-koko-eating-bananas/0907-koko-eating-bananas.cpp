#include<math.h>
class Solution {
public:

    long long time(vector<int>& piles, int m){
        long long tt=0;
        for(int i=0; i<piles.size(); i++){
            if(piles[i] <= m) tt++;
            else{
                if(piles[i]%m == 0) tt += piles[i]/m;
                else tt += piles[i]/m+1;
            }
        }
        return tt;
    }

    int minEatingSpeed(vector<int>& piles, int t) {
        if(piles.size() == 1){
            if(piles[0]%t == 0) return piles[0]/t;
            else return piles[0]/t+1;
        }
        int max = INT_MIN, ans=0;
        for(int i=0; i<piles.size(); i++){
            if(max < piles[i]) max = piles[i];
        }
        // cout << max << endl;
        int l=1, h=max;
        while(l <= h){
            int m = (l+h)/2;
            long long tt = time(piles, m);
            // cout << m <<  " " << tt << endl;
            // if(tt == t) return m;
            if(tt <= t){
                ans = m;
                h = m-1;                
            }
            else l = m+1;
        }
        return ans;
    }
};