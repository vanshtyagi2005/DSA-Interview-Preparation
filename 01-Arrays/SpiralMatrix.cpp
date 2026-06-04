class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        //problem link- https://leetcode.com/problems/spiral-matrix/description/
        // only one approach is possible no Brute force code can be written for it 
        //For this approach ->
        //Time complexity = O(r X c)
        //Space complexity =O(r X c)
        // we have to repeat 4 major steps to print the Spiral Matrix
        // steps-
        // 1. Insert Extreme Top 
        // 2. Insert extreme right
        // 3. Insert Extreme Bottom
        // 4. Insert extreme left 
        // All should print elements without repeating the already printed one
    int r=matrix.size(); // give no of rows
    int c=matrix[0].size(); // give no of columns
    int top=0, bottom=r-1,left=0,right=c-1; // given the positions to each one of them to follow a correct order 
    vector<int> final ;
    while(top<=bottom && left<=right){ // condition to be checked so no element will left 
        for(int i=left;i<=right;i++){
            final.push_back(matrix[top][i]);
        }
        top++; // top is increased to move to the next row 
        for(int i=top;i<=bottom;i++){
            final.push_back(matrix[i][right]);
        }
        right--; // right is decreased to move to the second most extreme column
        if(top<=bottom){ // this condition will check whether any row is still left or not?
            for(int i=right;i>=left;i--){
                final.push_back(matrix[bottom][i]);
            }
            bottom--; // bottom is decreased to most next most extreme bottom 
        }
        if(left<=right){ // this condition will check if any other column is left or not?
            for(int i=bottom;i>=top;i--){
                final.push_back(matrix[i][left]);
            }
            left++; //left is increased to move to the next column of matrix
        }       
    }
    return final;
    }
};