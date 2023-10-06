class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int flag = -1;
        for(int i=1; i<nums.size(); i++){
            if(nums[i-1] == nums[i]) continue;
            else if(nums[i-1] > nums[i]){
                if(flag == 1) return false;
                else flag = 0; 
            }
            else{
                if(flag == 0) return false;
                else flag = 1;
            }
        }
        return true;
    }
};