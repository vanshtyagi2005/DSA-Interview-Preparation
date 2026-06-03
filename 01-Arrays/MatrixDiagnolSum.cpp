class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        //problem Link- https://leetcode.com/problems/matrix-diagonal-sum/
        int sum=0;
        //if size is one then sum of mat is also that same element 
    if (mat.size()==1){
        return mat[0][0];
    }
    else {
        for(int i=0;i<mat.size();i++){ //used only one loop for better complexity
            sum+=mat[i][i]+mat[i][mat.size()-1-i];
            // mat.size()-1-i is taken as left diagnol position is reducing 
            // ex>> if matrix size is 3 then left diagnol would be --> (0,2),(1,1),(2,0)
        }
    }
    if (mat.size()%2==1){
        //if vector size of odd that means middle element is added twice
        //middle position can easily be find by size of matrix divied by 2
        //i.e. ex=> size =9 , then middle = 9/2=4 >>> middle=mat[4][4]
        sum-=mat[mat.size()/2][mat.size()/2];
    }
    return sum;
    }
};