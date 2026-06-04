class Solution {
public:
    int scoreOfString(string s) {
        //problem link- https://leetcode.com/problems/score-of-a-string/description/
        //just simple approach of traversing the string and taking the abs diff of the element with the next element 
        //and add it to the sum
        //length os string will always be greater than 2 so no base condition is needed to be checked 
        int sum=0;
        for(int i=0;i<s.size()-1;i++){
            sum+=abs(s[i]-s[i+1]); // using maths abs function to change the negative difference to positive 
        }
        return sum;
    }
};