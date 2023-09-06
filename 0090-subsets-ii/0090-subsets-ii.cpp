class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        // std::vector<std::vector<int>> ans;
        vector<vector<int>> sol;
        set<vector<int>> ans;
        vector<int> temp;
        sort(nums.begin(), nums.end());
        for(int i=0; i<pow(2,nums.size()); i++){
            int j=i, k=0;
            while(j != 0){
                if((j&1) == 1) temp.push_back(nums[k]);
                k++;
                j = j>>1;
            }
            ans.insert(temp);
            temp.clear();
        }
        // std::sort(ans.begin(), ans.end());
        // ans.erase(std::unique(ans.begin(), ans.end()), ans.end());
        for(auto ptr:ans){
            sol.push_back(ptr);
        }
        return sol;
    }
};
// using set