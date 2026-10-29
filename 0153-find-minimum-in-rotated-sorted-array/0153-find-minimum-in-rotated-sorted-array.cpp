class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        int ans=INT_MAX;
        while(low<=high)
        {
            int mid=(low+high)/2;
            //eliminate the left half and take smallest from the left half
            if(nums[low]<=nums[mid])
            {
                ans=min(ans,nums[low]);
                low=mid+1;
            }
            //eliminate the right and take the min from the right half
            else{
            high=mid-1;
            ans=min(ans,nums[mid]);
        }
        }
        return ans;
        
    }
};