// Problem: Find the Highest Altitude
// Platform: LeetCode 75
// Approach: Prefix Sum (Running Sum)
// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int current_altitude = 0;
        int max_altitude = 0;

        for (int i = 0; i < gain.size(); i++) {
            current_altitude += gain[i];
            max_altitude = max(max_altitude, current_altitude);
        }

        return max_altitude;
    }
};
