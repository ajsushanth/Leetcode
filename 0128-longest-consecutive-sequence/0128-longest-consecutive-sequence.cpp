class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        sort(nums.begin(), nums.end());
        int count=1, max=1;
        for(int i=1; i<nums.size(); i++){
            if(nums[i] == nums[i-1]) continue;
            if(nums[i] - nums[i-1] == 1) count++;
            else {
                if(max < count) max = count;
                count = 1;
            }
        }
        if(max < count) max = count;
        return max;
    }
};