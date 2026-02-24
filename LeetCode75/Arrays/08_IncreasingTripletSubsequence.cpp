// Problem: Increasing Triplet Subsequence
// Platform: LeetCode 75
// Approach: Greedy (Track smallest and second smallest elements)
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int first = INT_MAX;
        int second = INT_MAX;

        for (int num : nums) {
            if (num <= first) {
                first = num;
            }
            else if (num <= second) {
                second = num;
            }
            else {
                return true;
            }
        }
        return false;
    }
};
