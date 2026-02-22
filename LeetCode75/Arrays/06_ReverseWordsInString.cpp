// Problem: Reverse Words in a String
// Platform: LeetCode 75
// Approach: Reverse Traversal
// Time Complexity: O(n)
// Space Complexity: O(n)
class Solution {
public:
    string reverseWords(string s) {
        string result = "";
        int i = s.length() - 1;

        while(i >= 0) {
            while(i >= 0 && s[i] == ' ')
            i--;

            if(i < 0)
                break;

            int j = i;
            while(i >= 0 && s[i] != ' ')
            i--;

            if (!result.empty())
                result += " ";

            result += s.substr(i + 1, j - i);
        }
        return result;
    }
};
