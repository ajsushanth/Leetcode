class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0, h=nums.size()-1;
        int ans = INT_MAX;
        while(l <= h){
            int m = (l+h)/2;
            if(nums[l] <= nums[m]){
                ans = min(ans, nums[l]);
                if(nums[m] <= nums[h]) h = m-1;
                else l = m+1;
            }
            else if(nums[m] <= nums[h]){
                ans = min(ans, nums[m]);
                if(nums[l] >= nums[m]) h = m-1;
                else l = m+1;
            }
            else return min(ans, nums[m]);
        }
        return ans;
    }
};