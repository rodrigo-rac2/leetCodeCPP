/**
 * Problem: https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/
 */

class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i = 0; i < haystack.length(); i++) {
            if(haystack[i] == needle[0]) {
                bool match = true;
                for(int j = 1; j < needle.length(); j++) {
                    if(!(haystack[i+j] == needle[j])) { 
                        match = false;
                        break;
                    }
                }
                if(match) return i;
            }
        }

        return -1;
    }
};
