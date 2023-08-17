class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
        vector<int> ans;
        // sort(nums.begin(), nums.end());
        int j = size-1;
        for(int i=0; i<size; i++){
            j=size-1;
            for(j; j>i; j--){
                if(nums[i] + nums[j] == target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
                }
            }
        }
        return ans;
    }      
};