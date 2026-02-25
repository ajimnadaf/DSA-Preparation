// Problem: Is Subsequence
// Platform: LeetCode 75
// Approach: Two Pointers
// Time Complexity: O(n)
// Space Complexity: O(1)class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;
        
        for(int j = 0; j< t.length() && i < s.length(); j++) {
            if(s[i] == t[j]) {
                i++;
            }
        }
        return i == s.length();
    }
};
