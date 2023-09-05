class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0, h=nums.size()-1;
        while(l <= h){
            int m = (l+h)/2;
            if(nums[m] == target) return m;
            else if(nums[0] <= nums[m]){
                if(nums[0] <= target && target < nums[m]) h = m-1;
                else l = m+1;
            }
            else{
                if(nums[m] < target && target <= nums[nums.size()-1]) l = m+1;
                else h = m-1; 
            }
        }
        return -1;
    }
};