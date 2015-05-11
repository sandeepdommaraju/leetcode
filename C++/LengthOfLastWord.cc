// Given a string s consists of upper/lower-case alphabets and empty space characters ' ', 
// return the length of last word in the string.

// If the last word does not exist, return 0.

// Note: A word is defined as a character sequence consists of non-space characters only.

class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        int i = s.size() - 1;
        for(; s[i] == ' ' && i >= 0; i--);
        for(; s[i] != ' ' && i >= 0; i--) length++;
        return length;
    }
};