class Solution {
public:
    void parenthesis(int n, int op, int cl, vector<string>& ans, string s){
        if(op + cl == n*2){
            ans.push_back(s);
            return;
        }
        if(op < n){
            // s = s + "(";
            parenthesis(n, op+1, cl, ans, s + "(");
        }
        if(cl < op){
            // s = s + ")";
            parenthesis(n, op, cl+1, ans, s + ")");
        }
    }

    vector<string> generateParenthesis(int n) {
        int op=0, cl=0;
        string s = "";
        vector<string> ans;
        parenthesis(n, op, cl, ans, s);
        return ans;
    }
};