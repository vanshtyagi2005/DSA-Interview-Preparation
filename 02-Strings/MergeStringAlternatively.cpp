/*
LeetCode 1768 - Merge Strings Alternately

Topic: Strings
Pattern: Two Pointers

Approach:
Use two pointers to traverse both strings and
append characters alternately to the answer string.
If one string is exhausted, append the remaining
characters of the other string.

Time Complexity: O(n + m)
Space Complexity: O(n + m)

where:
n = length of word1
m = length of word2
*/
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s;
        int i=0,j=0,counter=0;
        while(counter<(word1.size()+word2.size())){
            if(counter%2==0){
                if(i<word1.size()){
                    s+=word1[i];
                }
                else{
                    s+=word2[j];
                    j++;
                }
                counter++;
                i++;
            }
            else{
                if(j<word2.size()){
                    s+=word2[j];
                }
                else{
                    s+=word1[i];
                    i++;
                }
                counter++;
                j++;
            }
        }
        return s;
    }
};