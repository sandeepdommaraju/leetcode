// Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

// For example,
// "A man, a plan, a canal: Panama" is a palindrome.
// "race a car" is not a palindrome.

// Note:
// Have you consider that the string might be empty? This is a good question to ask during an interview.

// For the purpose of this problem, we define empty string as valid palindrome. 

class Solution {
public:
    bool isPalindrome(string s) {    	
        int begin = 0;
        int end = s.size() - 1;
        while (begin < end) {        	
        	while( begin < end && !isalnum(s[begin]))  ++begin;
        	while( begin < end && !isalnum(s[end]))  --end;
        	if(!(tolower(s[begin]) == tolower(s[end]))) 
        		return false;
        	++begin;
        	--end;
        } 
        return true;
    }
};