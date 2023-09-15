class Solution {
public:
    bool check(vector<int>& nums, int m, int threshold){
        int sum=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]%m == 0) sum += nums[i]/m;
            else sum += nums[i]/m + 1;
        }
        // if(sum <= threshold) return true;
        // else return false;
        return sum <= threshold; 
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        // int nmin = INT_MAX;
        int nmax = INT_MIN;
        for(int i=0; i<nums.size(); i++){
            // nmin = min(nmin, nums[i]);
            nmax = max(nmax, nums[i]);
        }
        int l = 1, h = nmax, ans=-1;
        while(l <= h){
            int m = (l+h)/2;
            bool yes = check(nums, m, threshold);
            if(yes){
                ans = m;
                h = m-1;
            }
            else l = m+1;
        }
        return ans;
    }
};