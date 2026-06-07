/*
LeetCode 242 - Valid Anagram

Topic: Strings
Pattern: Hashing (Frequency Array)

Approach:
Use two frequency arrays of size 26 to store the
occurrence count of each lowercase character in
both strings.

If the frequencies of all characters match,
the strings are anagrams; otherwise, they are not.

Time Complexity: O(n)
Space Complexity: O(1)

where:
n = length of the input strings
*/
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        else{
            vector<int> m1(26,0);
            vector<int> m2(26,0);
            for(int i=0;i<s.size();i++){
                m1[s[i]-'a']++;
                m2[t[i]-'a']++;
            }
            for(int i=0;i<m1.size();i++){
                if(m1[i]!=m2[i]){
                    return false;
                }
            }
        }
    return true;
    }
};