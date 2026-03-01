// Problem: Maximum Number of Vowels in a Substring of Given Length
// Platform: LeetCode 75
// Approach: Sliding Window
// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
public:
    int maxVowels(string s, int k) {
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
        int max_count = 0; 
        int current_count = 0;
        
        for (int i = 0; i < s.length(); i++) {
            if (vowels.count(s[i])) {
                current_count++;
            }
            
            if (i >= k) {
                if (vowels.count(s[i - k])) {
                    current_count--;
                }
            }

            max_count = max(max_count, current_count);
        }

        return max_count;
    }
};
