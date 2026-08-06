class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        //Step 1:Transpose of the given matrix
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        //step 2:Reverse the row
        for(int i=0;i<n;i++){
            //reverse the complete row to clockwise direction
            reverse(matrix[i].begin(),matrix[i].end());
        }
        
    }
};