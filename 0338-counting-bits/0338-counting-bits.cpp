class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> bits;
        for(int i=0; i<=n; i++){
            int c=0;
            for(int j=0; j<32; j++){
                int num=i;
                num = num>>j;
                if((num&1)==1)c++;
            }
            bits.push_back(c);
        }
        return bits;
    }
};