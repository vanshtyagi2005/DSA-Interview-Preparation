/*
LeetCode 217 - Contains Duplicate

Topic: Arrays
Pattern: Hashing (unordered_set)

Approach:
Traverse the array and store each element in an
unordered_set.

Before inserting an element, check whether it
already exists in the set. If it does, a duplicate
has been found and return true.

If the traversal completes without finding any
duplicate, return false.

Time Complexity: O(n)
Space Complexity: O(n)

where:
n = size of the input array
*/
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for(int i=0;i<nums.size();i++){
            if(seen.find(nums[i])!= seen.end()){
                return true;
            }
            seen.insert(nums[i]);
        }
        return false;
    }
};