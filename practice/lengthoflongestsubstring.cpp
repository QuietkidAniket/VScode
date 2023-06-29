#include <iostream>
#include <unordered_map>

using namespace std;
class Solution{
    public:
int lengthOfLongestSubstring(string s) {
        //a vector for storing the index of any character occuring in the string, by default all the characters are given index = -1
        // the character's ascii value serves as the key and the index is mapped as value to the key in the dict vector
        vector<int> dict(256, -1);
        //maxLen is for storing the length of longest substring, start stores the index from where a substring starts
        int maxLen = 0, start = -1;
        //iterating over the entire string s passed to us
        for (int i = 0; i != s.length(); i++) {
            //if a character has occured previously then the index of the character should be more than the starting index of substring, 
            //and the previous substring ends here and a new substring 'starts' from this index
            if (dict[s[i]] > start)
                start = dict[s[i]];
            //the indices of the characters are stored or overwritten if they are occurring again
            dict[s[i]] = i;
            // maxLen is updated to the length of the current substring if its bigger than the previous
            //  otherwise maxLen retains the length of the previous substring since its still bigger than current one
            maxLen = max(maxLen, i - start);
        }
        return maxLen;
};

int main(){
    Solution obj;
    cout<< "abcabcbb : " << obj.lengthOfLongestSubstring("abcabcbb") << "\n";
    cout<< "bbbb  : " << obj.lengthOfLongestSubstring("bbbb") << "\n";
    cout<< "pewkew : " << obj.lengthOfLongestSubstring("pewkew") << "\n";
    cout<< "  : " << obj.lengthOfLongestSubstring(" ") << "\n";
    cout<< "cdd : " << obj.lengthOfLongestSubstring("cdd") << "\n"; 
    cout<< "abcb : " << obj.lengthOfLongestSubstring("abcb") << "\n"; 
    cout<< "au : " << obj.lengthOfLongestSubstring("au") << "\n"; 
}
