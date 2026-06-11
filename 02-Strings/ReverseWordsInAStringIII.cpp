/*
LeetCode 557 - Reverse Words in a String III

Topic: Strings
Pattern: Two Pointers

Approach:
Store the indices of all spaces in the string.
Each pair of consecutive space positions defines
a word boundary.

For every word, use two pointers to reverse the
characters in-place while preserving the order of
the words.

Time Complexity: O(n)
Space Complexity: O(n)

where:
n = length of the input string
*/
class Solution {
public:
    string reverseWords(string s) {
        vector <int> spaces;
        int i=0;
        for(;i<s.size();i++){
            if(s[i]==' '){
                spaces.push_back(i);
            }
        }
        spaces.push_back(i);
        i=0;
        for(int k=0;k<spaces.size();k++){
            int j=spaces[k]-1;
            while(i<j){
                swap(s[i],s[j]);
                i++;j--;
            }
            i=spaces[k]+1;
        }
        return s;
    }
};