class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l=0, h=nums.size()-1;
        while(l <= h){
            if(nums[l] == 0){
                nums.push_back(nums[l]);
                nums.erase(nums.begin() + l);
                h--;
            }
            else{
                l++;
            }
        }
    }
};