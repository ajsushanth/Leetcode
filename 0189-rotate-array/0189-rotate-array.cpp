class Solution {
public:
  void reverse(vector<int>& nums, int l, int h){
    while(l < h){
      swap(nums[l], nums[h]);
      l++;
      h--;
    }
  }

    void rotate(vector<int>& nums, int k) {
        k = k%nums.size();
        int l = 0, h = nums.size() - k - 1;
        reverse(nums, l, h);
        l = nums.size() - k, h = nums.size()-1;        
        reverse(nums, l, h);
        h = nums.size()-1;
        reverse(nums, 0, h);
    }
};

/*
reverse(nums.begin(), nums.begin() + nums.size() - k);
reverse(nums.begin() + nums.size() - k, nums.end());
reverse(nums.begin(), nums.end());
*/