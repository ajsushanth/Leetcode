class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> set;
        for(int i=0; i<pow(2,nums.size()); i++){
            int j=i, k=0;
            while(j > 0){
                if((j&1) == 1){
                    set.push_back(nums[k]);
                }
                j = j>>1;
                k++;
            }
            ans.push_back(set);
            set.clear();
        }
        return ans;
    }
};