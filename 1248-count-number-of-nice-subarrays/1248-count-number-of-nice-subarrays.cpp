class Solution {
public:
    int atMost(vector<int>& nums,int goal) {
        int right=0,left=0,sum=0,count=0;
        if(goal<0)
        return 0;
        while(right<nums.size())
        {
            sum+=(nums[right] % 2);
        while(sum>goal){
            sum-=(nums[left] % 2);
            left++;
        }
        count=count+(right-left+1);
        right++;
    }
    return count;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return atMost(nums, k) - atMost(nums, k - 1);
    }
};