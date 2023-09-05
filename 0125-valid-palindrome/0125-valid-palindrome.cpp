class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        int i=0, j=s.size()-1;
        while(i<=j){
            if(!isalpha(s[i]) && !isdigit(s[i])){
                i++;
                continue;
            }
            if(!isalpha(s[j]) && !isdigit(s[j])){
                j--;
                continue;
            }
            if(s[i] != s[j]) return false;
            // cout << s[i] << " " << i << " " << s[j] <<  " " << j << endl;
            i++;
            j--;
        }
        return true;
    }
};