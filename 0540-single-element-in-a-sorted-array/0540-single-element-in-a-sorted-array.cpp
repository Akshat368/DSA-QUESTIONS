class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // Handle the smallest possible input directly.
        if (nums.size() == 1) {
            return nums[0];
        }

        // Check expected pairs one by one.
        for (int i = 0; i < (int)nums.size() - 1; i += 2) {
            // If the pair breaks here, this value has no partner.
            if (nums[i] != nums[i + 1]) {
                return nums[i];
            }
        }

        return nums.back();
    }
};
