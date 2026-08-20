class Solution {
public:
    int atMost(vector<int>& nums, int k) {
        if (k < 0) return 0;
        unordered_map<int,int> mpp;
        int left = 0, count = 0;
        for (int right = 0; right < nums.size(); right++) {
            mpp[nums[right]]++;
            while (mpp.size() > k) {
                mpp[nums[left]]--;
                if (mpp[nums[left]] == 0) mpp.erase(nums[left]);
                left++;
            }
            count += right - left + 1;   // every subarray ending at `right` starting from `left..right`
        }
        return count;
    }

    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atMost(nums, k) - atMost(nums, k - 1);   // <-- the "one line" you were missing
    }
};