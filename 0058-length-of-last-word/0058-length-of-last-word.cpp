class Solution {
public:
    int lengthOfLastWord(string s) {
        int l=0, flag=0;
        for(int i=s.length()-1; i>=0; i--){
            if(s[i] != ' '){
                flag = 1;
                l++;
            }
            else if(s[i] == ' ' && flag == 1) return l;
        }
        return l;
    }
};