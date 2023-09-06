class Solution {
public:
    void sumf(vector<int>& candidates, int target, set<vector<int>>& ans, vector<int>& res, int i)
    {
        if(i == candidates.size()){
            if(target == 0){
                ans.insert(res);
            }
            return;
        }
        if(candidates[i] <= target){
            res.push_back(candidates[i]);
            sumf(candidates, target-candidates[i], ans, res, i);
            res.pop_back();
        }
        sumf(candidates, target, ans, res, i+1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> sol;
        set<vector<int>> ans;
        vector<int>res;
        int i=0;
        sort(candidates.begin(), candidates.end());
        sumf(candidates, target, ans, res, i);
        for(auto ptr:ans){
            sol.push_back(ptr);
        }
        return sol;
    }
};

/* using set -> set<vector<int>> ans;
    ans.insert(temp);
    vector<vector<int>> sol;
    for(auto ptr:ans){
        sol.push_back(ans);
    }
*/

/*
std::vector<std::vector<int>> ans;
std::sort(ans.begin(), ans.end());
ans.erase(std::unique(ans.begin(), ans.end()), ans.end());
*/