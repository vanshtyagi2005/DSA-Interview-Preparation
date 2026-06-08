/*
LeetCode 643 - Maximum Average Subarray I

Topic: Arrays
Pattern: Sliding Window

Approach:
Calculate the sum of the first window of size k.

Then slide the window one position at a time by
removing the leftmost element and adding the next
element to the right.

Track the maximum window sum encountered and
return its average.

Time Complexity: O(n)
Space Complexity: O(1)

where:
n = size of the input array
k = window size
*/
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=0;
        int mxsum;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        mxsum=sum;
        for(int i=k;i<nums.size();i++){
            sum-=nums[i-k];
            sum+=nums[i];
            if(sum>mxsum){
                mxsum=sum;
            }
        }
        return (double)mxsum/k;
    }
};