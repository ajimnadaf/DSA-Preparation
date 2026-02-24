// Problem: String Compression
// Platform: LeetCode 75
// Approach: Two Pointers (In-place compression)
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    int compress(vector<char>& chars) {
       int n = chars.size();
       int i = 0;
       int write = 0;

       while (i < n) {
        int currentChar = chars[i];
        int count = 0;

            while (i < n && chars[i] == currentChar){
                i++;
                count++;           
            }

            chars[write++] = currentChar;

            if (count > 1) {
                string cnt = to_string(count);
                for (char c : cnt) {
                    chars[write++] = c;
                }
            }
        }
        return write;
    }
};
