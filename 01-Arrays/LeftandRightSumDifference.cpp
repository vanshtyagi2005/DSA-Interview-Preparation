/*
LeetCode 2574 - Left and Right Sum Differences

Topic: Arrays
Pattern: Prefix Sum

Approach:
Maintain two arrays to store cumulative sums from
the left and right sides of the input array.

Traverse the array once to build the left and right
sum arrays. Then, calculate the absolute difference
between the corresponding left and right sums for
each index and store the result in the answer array.

Time Complexity: O(n)
Space Complexity: O(n)

where:
n = size of the input array
*/
class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> rightSum;
        vector<int> leftSum;
        vector<int> answer;
        int lsum=0,rsum=0,i=0,j=nums.size()-1;
        rightSum.push_back(rsum);
        leftSum.push_back(lsum);
        while(i<nums.size()-1){
            lsum+=nums[i];
            rsum+=nums[j];
            rightSum.push_back(rsum);
            leftSum.push_back(lsum);
            i++;
            j--;
        }
        for(int i=0;i<nums.size();i++){
            answer.push_back(abs(rightSum[nums.size()-1-i]-leftSum[i]));
        }
        return answer;
    }
};