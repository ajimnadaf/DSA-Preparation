// Problem: Removing Stars From a String
// Platform: LeetCode 75
// Approach: Use stack (push characters, pop when '*' appears)
// Time Complexity: O(n)
// Space Complexity: O(n)
class Solution {
public:
    string removeStars(string s) {
        string result;

        for(char c : s){
            if(c == '*'){
                result.pop_back();
            }else{
                result.push_back(c);
            }
        }

        return result;
    }
};
