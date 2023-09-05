class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l = lowerbound(nums, target);
        int h = upperbound(nums, target);
        vector<int> range;
        range.push_back(l);
        range.push_back(h);
        return range;
    }

    int lowerbound(vector<int>& nums, int target){
        int i=0, j=nums.size()-1;
        int ans = -1;
        while(i <= j){
            int m = (i+j)/2;
            if(nums[m] == target){
                ans = m;
                j = m-1;
            }
            else if(nums[m] > target) j = m-1;
            else i = m+1;
        }
        return ans;
    }

    int upperbound(vector<int>& nums, int target){
        int i=0, j=nums.size()-1;
        int ans = -1;
        while(i <= j){
            int m = (i+j)/2;
            if(nums[m] == target){
                ans = m;
                i = m+1;
            }
            else if(nums[m] > target) j = m-1;
            else i = m+1;
        }
        return ans;
    }
};