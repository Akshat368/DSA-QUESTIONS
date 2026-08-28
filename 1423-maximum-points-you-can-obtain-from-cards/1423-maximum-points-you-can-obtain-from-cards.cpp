class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lsum=0,rsum=0,maxSum=0,rindex;
        int n=cardPoints.size();
        for(int i=0;i<k;i++){
            lsum+= cardPoints[i];
        }
        maxSum=lsum;
        rindex=n-1;
        for(int i=k-1;i>=0;i--)
        {
            lsum=lsum-cardPoints[i];
            rsum+= cardPoints[rindex];
            rindex=rindex-1;
            maxSum=max(maxSum,lsum+rsum);
        }
    return maxSum;
    }
};