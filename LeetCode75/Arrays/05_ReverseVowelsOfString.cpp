// Problem: Reverse Vowels of a String
// Platform: LeetCode 75
// Approach: Two Pointers (Swap vowels from start and end)
// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
public:
    bool isVowel(char c) {
        c = tolower(c);
        return c == 'a' || c == 'e' || c == 'i' ||  c == 'o' || c == 'u';
    }

    string reverseVowels(string s) {
        int left = 0;
        int right = s.length() - 1;

        while (left < right) {

            while (left < right && !isVowel(s[left])) {
                left++;
            }

            // Move right pointer until vowel found
            while (left < right && !isVowel(s[right])) {
                right--;
            }

            // Swap vowels
            swap(s[left], s[right]);

            left++;
            right--;
        }

        return s;  
    }
};
