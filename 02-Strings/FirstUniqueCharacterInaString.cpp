/*
LeetCode 387 - First Unique Character in a String

Topic: Strings
Pattern: Hashing (Frequency Array)

Approach:
Store the frequency of each lowercase character
using a frequency array of size 26.

Traverse the string once to count the occurrences
of each character.

Traverse the string again and return the index of
the first character whose frequency is equal to one.

Time Complexity: O(n)
Space Complexity: O(1)

where:
n = length of the input string
*/
class Solution {
public:
    int firstUniqChar(string s) {
    //     for(int i=0;i<s.size();i++){
    //         int count=0;
    //         for(int j=0;j<s.size();j++){
    //             if(s[i]==s[j]){
    //                 count++;
    //             }
    //         }
    //         if(count==1) return i;
    //     }
    //     return -1;
    // }
        vector <int> freq(26);
        for(char c:s){
            freq[c-'a']++;
        }
        for(int i=0;i<s.size();i++){
            if (freq[s[i]-'a']==1){
                return i;
            }
        }
        return -1;
    }
};