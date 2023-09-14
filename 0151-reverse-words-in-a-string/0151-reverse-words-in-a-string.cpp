class Solution {
public:
    string reverseWords(string s) {
        int i=s.length()-1;
        string str = "";
        string ans = "";
        char ch, x;
        for(i=s.length()-1; i>=0; i--){
            ch = s[i];
            if(i>0) x = s[i-1];
            if(ch == ' ' && x == ' ') continue;
            if(ch == ' '){
                if(ans == "") ans = str;
                else ans = ans + " " + str;
                str = "";
                // cout << ans << endl;
            }
            else{
                str = ch + str;
            }
        }
        if(ans == "") ans = ans + str;
        else ans = ans + " " + str;
        return ans;
    }
};