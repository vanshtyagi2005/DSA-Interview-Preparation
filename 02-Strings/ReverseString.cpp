class Solution {
public:
    void reverseString(vector<char>& s) {
        //problem link-https://leetcode.com/problems/reverse-string/
        //A simple and Optimal 2 pointer appraoch is used in this 
        //Time complexity= O(n)
        //Space complexity= O(1)
        int i=0;
        int j= s.size()-1;
        while(i<j){// running loop till i is less than j means half of the array
            swap(s[i],s[j]); // Swaping the elements of both position with each other 
            i++; // i is incremented to center of array
            j--; // while j is decremented to center of array
        }
    }
};