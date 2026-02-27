// Problem: Max Number of K-Sum Pairs
// Platform: LeetCode 75
// Approach: Hash Map (Count frequency of complements)
// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int count = 0;

        for (int num : nums) {
            int complement = k - num;

            if (mp[complement] > 0) {
                count++;
                mp[complement]--;
            } 
            else {
                mp[num]++;
            }
        }
        return count;
    }
};
