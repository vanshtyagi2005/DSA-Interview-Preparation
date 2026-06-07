/*
LeetCode 2114 - Maximum Number of Words Found in Sentences

Topic: Strings
Pattern: String Traversal

Approach:
The number of words in a sentence is equal to the
number of spaces plus one.

Traverse each sentence and count the spaces present.
Keep track of the maximum word count among all
sentences.

Time Complexity: O(n * m)
Space Complexity: O(1)

where:
n = number of sentences
m = average length of a sentence
*/
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int mx=1;
        int i=0,j=sentences.size();
        while(i<j){
            int countWords=1;
            for(int k=0;k<sentences[i].size();k++){
                if(sentences[i][k]==' '){
                    countWords++;
                }
            }
            if (countWords>mx){
                mx=countWords;
            }
            i++;
        }
        return mx;
    }
};