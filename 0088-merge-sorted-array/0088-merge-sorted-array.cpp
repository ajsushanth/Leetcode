class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0, j=0;
        vector<int> nums;
        while(i<m && j<nums2.size()){
            if(nums1[i] <= nums2[j]) nums.push_back(nums1[i++]);
            else nums.push_back(nums2[j++]);
        }
        while(i<m)nums.push_back(nums1[i++]);
        while(j<nums2.size()) nums.push_back(nums2[j++]);
        for(int i=0; i<nums.size(); i++){
            nums1[i] = nums[i];
        }
    }
};