class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        return min({
            nums[n-3] - nums[0],   // change the two largest
            nums[n-1] - nums[2],   // change the two smallest
            nums[n-2] - nums[1]    // change the smallest and the largest
        });
    }
};