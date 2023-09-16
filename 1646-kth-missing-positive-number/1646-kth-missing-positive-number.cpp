class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int l=0, h = arr.size()-1, mnum=0;
        while(l <= h){
            int m = (l+h)/2;
            mnum = arr[m] - m - 1;
            if(mnum < k){
                l = m+1;
            }
            else{
                h = m-1;
            }
        }
        int xnum=0;
        xnum = k + h + 1;
        return xnum;
    }
};