class Solution {
public:
    int atMost(vector<int>& nums,int goal) {
        int right=0,left=0,sum=0,count=0;
        if(goal<0)
        return 0;
        while(right<nums.size())
        {
            sum+=nums[right];
        while(sum>goal){
            sum-=nums[left];
            left++;
        }
        count=count+(right-left+1);
        right++;
    }
    return count;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atMost(nums, goal) - atMost(nums, goal - 1);
    }
};