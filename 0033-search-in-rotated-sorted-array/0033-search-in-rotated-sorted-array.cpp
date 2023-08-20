class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i=0, j=nums.size()-1;
        if(nums[i] == target) return i;
        if(nums[j] == target) return j;
        while(i <= j){
            int mid = (i+j)/2;
            if(nums[mid] == target) return mid;
            else if(nums[mid] > target){
                if(nums[mid] < nums[0]){
                    if(target <= nums[0]) j = mid-1;
                    else i = mid+1; 
                }
                else{
                    if(target >= nums[0]) j = mid-1;
                    else i = mid+1; 
                }
            }
            else{
                if(nums[mid] < nums[0]){
                    if(target < nums[0]) i = mid+1;
                    else j = mid-1;
                }
                else{
                    if(target < nums[0]) j = mid-1;
                    else i = mid+1;
                }
            }
        }
        return -1;
    }
};