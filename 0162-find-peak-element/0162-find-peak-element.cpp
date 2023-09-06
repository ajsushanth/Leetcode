class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l=0, h=nums.size()-1;
        if(nums.size()==1) return 0;
        else if(nums[l] > nums[l+1]) return l;
        else if(nums[h] > nums[h-1]) return h;
        while(l <= h){
            int m = (l+h)/2;
            if(nums[m-1] < nums[m] && nums[m] > nums[m+1]) return m;
            else if(nums[m-1] < nums[m]) l = m;
            else h = m;
        }
        return -1;
    }
};