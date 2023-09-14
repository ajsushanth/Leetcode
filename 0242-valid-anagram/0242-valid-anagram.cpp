class Solution {
public:
    bool isAnagram(string s, string t) {
        int freq[26] = {0};
        for(int i=0; i<s.length(); i++){
            freq[s[i]-97]++;
        }
        for(int i=0; i<t.length(); i++){
            freq[t[i]-97]--;
        }
        for(int i=0; i<26; i++){
            if(freq[i]!=0) return false;
        }
        return true;
    }
};