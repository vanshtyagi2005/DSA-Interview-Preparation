/*
LeetCode 443 - String Compression

Topic: Strings
Pattern: Two Pointers

Approach:
Traverse the array and count consecutive
occurrences of the same character.

Write the character once and, if its frequency
is greater than 1, write the frequency digits
immediately after it.

Use one pointer for reading and another for
writing the compressed result in-place.

Time Complexity: O(n)
Space Complexity: O(1)

where:
n = size of the character array
*/
class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0;
        int index = 0;
        while(i < chars.size()) {
            char current = chars[i];
            int count = 0;
            while(i < chars.size() && chars[i] == current) {
                count++;
                i++;
            }
            chars[index++] = current;
            if(count > 1) {
                string freq = to_string(count);
                for(char c : freq) {
                    chars[index++] = c;
                }
            }
        }
        return index;
    }
};