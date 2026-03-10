// Problem: Equal Row and Column Pairs
// Platform: LeetCode 75
// Approach: Store rows in hashmap and compare with columns
// Time Complexity: O(n^2)
// Space Complexity: O(n^2)
class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size();
        map<vector<int>, int> mp;

        // Store rows
        for (int i = 0; i < n; i++) {
            mp[grid[i]]++;
        }

        int ans = 0;

        // Check columns
        for (int j = 0; j < n; j++) {
            vector<int> col;
            for (int i = 0; i < n; i++) {
                col.push_back(grid[i][j]);
            }

            if (mp.count(col)) {
                ans += mp[col];
            }
        }

        return ans;
    }
};
