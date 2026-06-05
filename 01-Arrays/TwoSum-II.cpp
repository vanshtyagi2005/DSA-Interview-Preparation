/*
LeetCode 167 - Two Sum II - Input Array Is Sorted

Topic: Arrays
Pattern: Two Pointers

Approach:
Use two pointers, one at the beginning and one at
the end of the sorted array.

If the current sum is smaller than the target,
move the left pointer forward to increase the sum.

If the current sum is greater than the target,
move the right pointer backward to decrease the sum.

Time Complexity: O(n)
Space Complexity: O(1)

where:
n = size of the input array
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0,j=numbers.size()-1;
        while(i<j){
            if (numbers[i]+numbers[j]==target){
                return {i+1,j+1};
            }
            else if (numbers[i]+numbers[j]<target){
                i++;
            }
            else {
                j--;}
        }
        return {-1,-1};
    }
};