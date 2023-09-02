class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> ans;
        for(int i=0; i<pow(2,nums.size()); i++){
            int k=0, j=i;
            while(j!=0){
                if((j&1) == 1){
                    ans.push_back(nums[k]);
                }
                j = j>>1;
                k++;
            }
            res.push_back(ans);
            ans.clear();
        }
        return res;
    }
};