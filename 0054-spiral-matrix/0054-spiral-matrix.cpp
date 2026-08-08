class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int top=0;
        int bottom=matrix.size()-1;
        int left=0;
        int right=matrix[0].size()-1;
        vector<int> result;  //vector to store final result
        while(top<=bottom && left<=right)
        {
            for(int i=left;i<=right;i++)  //traverse from left to right across top row
            {
                result.push_back(matrix[top][i]);
            }
            top++;
            for(int i=top;i<=bottom;i++)  //traverse from top to bottom on right column 
            {
                result.push_back(matrix[i][right]);
            }
            right--;
            if(top<=bottom)  //check if number of rows are remaining or not
            {
                for(int i=right;i>=left;i--)  //traverse from right to left on bottom row 
            {
                result.push_back(matrix[bottom][i]);
            }
            bottom--;
            }
            if(left<=right){   //check if number of column are remaining or not
                for(int i=bottom;i>=top;i--)  //traverse from bottom to top on left column
            {
                result.push_back(matrix[i][left]);
            }
            left++;   
            }
        }
         return result; 
    }
};