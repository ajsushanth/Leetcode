class Solution {
public:
// recursive solve function implementation
    void solve(int index, string str, vector<string>& sub, vector<vector<string>>& ans){
        if(index == str.length()){
            ans.push_back(sub);
        }
        for(int i=index; i<str.length(); i++){
            if(isPalindrome(str, index, i)){
                sub.push_back(str.substr(index, i-index+1));
                // sub.push_back(substr(str, index, i));
                solve(i+1, str, sub, ans);
                sub.pop_back();
            }
        }
    }
// checking if the substring is a Palindrome or not
    bool isPalindrome(string str, int start, int end){
        while(start <= end){
            if(str[start] != str[end]) return false;
            start++;
            end--;
        }
        return true;
    }
// generating substring
    // string substr(string str, int start, int end){
    //     string ans = "";
    //     for(int i=start; i<=end; i++){
    //         ans = ans + str[i];
    //     }
    //     return ans;
    // }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> sub;
        int index = 0;
        solve(index, s, sub, ans); //calling recursive substring function
        return ans;
    }
};