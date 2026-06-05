class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        //Problem Link- https://leetcode.com/problems/longest-common-prefix/
        //A simple basic approach of 2 pointer is used as 
        // find the smallest one from all given strings as only that can be common in all given strings 
        // now match from each element and find out which part is common 
        // if the matching part is smaller then preivously found one then change the smallest one too
        //Time Complexity= O(n X m)
        //Space Complexity =O(m)
        // where n= no of elements in array
        //m = length of prefix or smallest word
        string mn=*min_element(strs.begin(),strs.end()),s=mn;// Finding the smallest element ( comparing by ASCII values)
        for(int i=0;i<strs.size();i++){ 
            string rep=""; // created a string to store the common part of two iterating strings
            for(int j=0;j<mn.size();j++){ // loop is only from 0 to size of mn as the common prefix can be equal to only mn
                if(strs[i][j]==mn[j]){
                    rep+=mn[j]; // if equal then add to rep
                }
                else break; // if two characters are different means that there is no possiblity of common prefix ahead in that string
            }
            if(rep.size()<s.size()){ // if the common prefix we found is less than the previously stored minimum
                s=rep; // then update the string s containing the common prefix in it 
            }
        }
        return s;    
    }
};