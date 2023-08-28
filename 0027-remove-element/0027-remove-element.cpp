class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> arr;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] != val){
                arr.push_back(nums[i]);
            }
        }
        nums.clear();
        for(int i=0; i<arr.size(); i++){
            nums.push_back(arr[i]);
        }
        return nums.size();
    }
};