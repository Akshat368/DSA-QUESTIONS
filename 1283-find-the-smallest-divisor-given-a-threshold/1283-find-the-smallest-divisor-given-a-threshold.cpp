class Solution {
public:
    int sumByD(vector<int>& nums, int div) {
        int sum = 0;
        for (int x : nums) {
            sum += (x + div - 1) / div;   // ceil(x/div)
        }
        return sum;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1, high = *max_element(nums.begin(), nums.end());
        int ans = high;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (sumByD(nums, mid) <= threshold) {
                ans = mid;
                high = mid - 1;   // aur chhota divisor try karo
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};