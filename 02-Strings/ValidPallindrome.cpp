class Solution {
public:
    bool isPalindrome(string s) {
        //problem link- https://leetcode.com/problems/valid-palindrome/?envType=problem-list-v2&envId=two-pointers
        // Used 2 pointer optimal Approach
        //Time Complexity= O(n)
        //Space Complexity= O(1)
        int i = 0, j = s.size() - 1;
        while (i <= j) {
            if (isalnum(s[i]) && isalnum(s[j])) { //isalnum(s) inbult function checking whether the string given is alphnumeric or not

                if (tolower(s[i]) != tolower(s[j])) // tolower() tranfroms into lower case  and compare both the two pointer if they are equal or not
                    return false; // return false is two characters are nto equal and matching
                i++; // i is incremented to next char
                j--; // j is decremeneted to  previous position
            } else if (isalnum(s[i]) == 0) // if character at pointer i is not a valid character or a special symbol or a space
                i++;// then moves to next location until a valid character is found
            else // if no above condition is matched then it means j;s character is npt a valid one
                j--; // so j moves back until a valid one is found
        }
        return true; // will give true at the end as by satrting we let that given String is Pallindrome
    }
};