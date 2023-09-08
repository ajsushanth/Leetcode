class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l=0, m=0, h=nums.size()-1;
        while(m <= h){
            if(nums[m] == 0){
                int temp = nums[m];
                nums[m] = nums[l];
                nums[l] = temp;
                l++;
                m++;
            }
            else if(nums[m] == 1){
                m++;
            }
            else{
                int temp = nums[m];
                nums[m] = nums[h];
                nums[h] = temp;
                h--;
            }
        }
    }
};
//Dutch National flag algorithm