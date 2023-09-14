class Solution {
public:
    bool total_days(vector<int>& bloomDay, int days, int b, int f){
        int cf=0, boq=0;
        for(int i=0; i<bloomDay.size(); i++){
            if(bloomDay[i] <= days) cf++;
            else{
                boq += cf/f;
                cf = 0;
            }
        }
        boq += cf/f;
        if(boq >= b) return true;
        else return false;
    }

    int minDays(vector<int>& bloomDay, int b, int f) {
        // long long x = b*f;
        if(b > bloomDay.size()/f) return -1;
        int min = INT_MAX, max = INT_MIN;
        for(int i=0; i<bloomDay.size(); i++){
            if(min > bloomDay[i]) min = bloomDay[i];
            if(max < bloomDay[i]) max = bloomDay[i];
        }
        // cout << min << " " << max << endl;
        int l = min, h = max, ans = -1;
        while(l <= h){
            int m = (l+h)/2;
            bool ver = total_days(bloomDay, m, b, f);
            // cout << m << " " << ver << endl;
            if(ver){
                ans = m;
                h = m-1;
            }
            else l = m+1;
        }
        return ans;
    }
};