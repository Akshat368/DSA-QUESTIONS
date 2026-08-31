class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,0);
        int evenIndex=0,oddIndex=1;
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                ans[evenIndex]=nums[i];
                evenIndex+=2;
            }
            else{
                ans[oddIndex]=nums[i];
                oddIndex+=2;
            }
        }
        return ans;  
    }
};