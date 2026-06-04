class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
    //Problem link-https://leetcode.com/problems/reshape-the-matrix/submissions/2021977003
    // 2 approaches- Brute and Optimal
    
    //1. Brute -uses one extra space
    // time complexity= O(n), n=r1*c1
    //space complexity == O(n)
    //Brute code:-
    // int r1=mat.size();
    // int c1=mat[0].size();
    // if(r1*c1!=r*c){
    //     return mat;
    // }
    // else{
    //     vector<vector<int>> final(r, vector<int>(c));
    //     vector <int> temp;
    //     for(int i=0;i<r1;i++){
    //         for(int j=0;j<c1;j++){
    //             temp.push_back(mat[i][j]);
    //         }
    //     }
    //     int k=0;
    //     for(int i=0;i<r;i++){
    //         for(int j=0;j<c;j++){
    //             final[i][j]=temp[k];
    //             k++;
    //         }
    //     }
    //     return final;
    // }

    //Optimal Approach- we dont need temp matrix to form 
    // WE can reduce Space Comlexity to --> O(1)
    //Optimal code:-
    int r1=mat.size(); // give no of rows of given matrix
    int c1=mat[0].size();// give no of columns of given matrix
    if(r1*c1!=r*c){ // Checking if not equal then transformation is not possible as
        return mat;// no of elements in both will not be equal..
    }
    else{
        vector<vector<int>> final(r, vector<int>(c));
        int k = 0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                final[i][j]=mat[k/c1][k%c1];//directly putting values 
                //Dry run of this above statement-
                //let i=0 and j=0 and k=0 and, then this means = final[0][0]=mat[0/c1][k%c1]
                //== final[0][0]=mat[0][0] 
                // for next iteration it will be - final[0][1]=mat[1/c1][1%c1]==mat[0][1] and so on
                k++;
            }
        }
        return final;
    }
    }
};