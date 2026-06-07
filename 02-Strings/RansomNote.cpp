/*
LeetCode 383 - Ransom Note

Topic: Strings
Pattern: Hashing (Frequency Array)

Approach:
Store the frequency of each lowercase character
present in both the ransom note and the magazine
using two frequency arrays of size 26.

After building the frequency arrays, compare the
frequency of each character. If any character is
required more times in the ransom note than it is
available in the magazine, return false.

Otherwise, return true.

Time Complexity: O(n + m)
Space Complexity: O(1)

where:
n = length of ransomNote
m = length of magazine
*/
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if(ransomNote.size()>magazine.size()){
            return false;
        }
        else{
            vector<int> m1(26,0);
            vector<int> m2(26,0);
            int i=0,j=0;
            while(i<ransomNote.size() && j<magazine.size()){
                m1[ransomNote[i++]-'a']++;
                m2[magazine[j++]-'a']++;
            }
            while(i<ransomNote.size()){
                m1[ransomNote[i++]-'a']++;
            }
            while(j<magazine.size()){
                m2[magazine[j++]-'a']++;
            }
            for(int i=0;i<m1.size();i++){
                if(m1[i]>m2[i]){
                    return false;
                }
            }
        }
        return true;
        }
};