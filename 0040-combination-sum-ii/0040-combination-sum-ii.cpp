class Solution {
public:
    void sumf(vector<int>& candidates, int target, vector<vector<int>>& sol, vector<int>& set, int i)
    {
        if(target == 0){
            sol.push_back(set);
            return;
        }
        for(int idx=i; idx<candidates.size(); idx++){
            if(idx>i && candidates[idx] == candidates[idx-1]) continue;
            if(candidates[idx] > target) break;
            set.push_back(candidates[idx]);
            sumf(candidates, target-candidates[idx], sol, set, idx+1);
            set.pop_back();
        }
        return;
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> sol;
        vector<int>set;
        int i=0;
        sort(candidates.begin(), candidates.end());
        sumf(candidates, target, sol, set, i);
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