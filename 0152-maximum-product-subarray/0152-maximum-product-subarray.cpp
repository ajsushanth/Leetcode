class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans1 = nums[0], ans2 = nums[0], res = nums[0];
        for(int i=1; i<nums.size(); i++){
            int temp = max(nums[i], max(ans1*nums[i], ans2*nums[i]));
            ans2 = min(nums[i], min(ans1*nums[i], ans2*nums[i]));
            ans1 = temp;
            res = max(res, ans1);
        }
        return res;
    }
};
// Kadane's Algorithm