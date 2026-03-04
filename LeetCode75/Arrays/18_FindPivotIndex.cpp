// Problem: Find Pivot Index
// Platform: LeetCode 75
// Approach: Prefix Sum
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total_sum = 0;
        
        // Step 1: Calculate total sum
        for (int num : nums) {
            total_sum += num;
        }
        
        int left_sum = 0;
        
        // Step 2: Traverse array
        for (int i = 0; i < nums.size(); i++) {
            int right_sum = total_sum - left_sum - nums[i];
            
            if (left_sum == right_sum) {
                return i;
            }
            
            left_sum += nums[i];
        }
        
        return -1;
    }
};
