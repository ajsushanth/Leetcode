class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.length() < needle.length()) return -1;
        for(int i=0; i<haystack.size(); i++){
            int j=0;
            int flag=1;
            if(haystack[i] == needle[j]){
                int k=i;
                while(j<needle.size() && k<haystack.size()){
                    if(haystack[k] != needle[j]){
                        flag=0;
                        break;
                    }
                    k++;
                    j++;
                }
                // cout << k << " " << j << endl;
                if(k-i == j && j == needle.size()) return i;
            }
        }
        return -1;
    }
};