class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        if(nums.size() == 1) return nums;
        sort(nums.begin(), nums.end());
        if(nums.size() == 2){
            if(nums[0] == nums[1]){
                ans.push_back(nums[0]);
                return ans;
            }
            else return nums;
        }
        int k=-1, j=0;
        for(int i=0; i<nums.size(); i++){
            j = i + nums.size()/3;
            if(j >= nums.size()) break;
            if(nums[i] == nums[j]){
                if(k >= 0 && nums[i] == ans[k]) continue;
                ans.push_back(nums[i]);
                k++;
                i = j;
            }
        }
        return ans;
    }
};