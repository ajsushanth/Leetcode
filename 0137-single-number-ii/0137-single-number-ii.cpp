class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int i=0; i<32; i++){
            int c1=0, c0=0;
            for(int j=0; j<nums.size(); j++){
                int n = nums[j]>>i;
                if((n&1) == 1) c1++;
                else c0++;
            }
            if(c0%3 == 0) ans = ans + (1<<i);
        }
        return ans;
    }
};