class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int min_Element=INT_MAX;
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
            min_Element=min(min_Element,nums[i]);
        }
        return sum-(long long)n*min_Element;
        
    
    }
};