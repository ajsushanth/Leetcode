class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int freq[nums.size()];
        for(int i=0; i<nums.size(); i++) freq[i] = 0;
        for(int i=0; i<nums.size(); i++){
            freq[nums[i]]++;
            if(freq[nums[i]] > 1) return nums[i];
        }
        return -1;
    }
};
// Range of the arr[i] and arr.size() is same -> Freq count method