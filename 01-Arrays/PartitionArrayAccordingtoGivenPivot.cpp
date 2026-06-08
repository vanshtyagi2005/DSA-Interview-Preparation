/*
LeetCode 2161 - Partition Array According to Given Pivot

Topic: Arrays
Pattern: Partitioning

Approach:
Traverse the array and store elements smaller than,
equal to, and greater than the pivot in separate
vectors.

Finally, concatenate the three vectors in the order:
less than pivot, equal to pivot, and greater than
pivot to form the required array.

Time Complexity: O(n)
Space Complexity: O(n)

where:
n = size of the input array
*/
class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> a;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot){
                a.push_back(nums[i]);
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==pivot){
                a.push_back(nums[i]);
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]>pivot){
                a.push_back(nums[i]);
            }
        }
        return a;
    }
};