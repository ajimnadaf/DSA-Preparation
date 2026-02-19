// Problem: Kids With the Greatest Number of Candies
// Platform: LeetCode 75
// Approach: Find max element then compare
// Time Complexity: O(n)
// Space Complexity: O(n)
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
      int maxCandies = 0;

      for(int i = 0; i < candies.size(); i++){
        if(candies[i] > maxCandies)
            maxCandies = candies[i];
      }

      vector<bool> result;
      for(int i = 0; i < candies.size(); i++){
        result.push_back(candies[i] + extraCandies >= maxCandies);
      }
        
      return result;
    }
};
