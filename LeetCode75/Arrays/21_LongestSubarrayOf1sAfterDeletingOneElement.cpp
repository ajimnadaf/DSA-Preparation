// Problem: Longest Subarray of 1's After Deleting One Element
// Platform: LeetCode 75
// Approach: Sliding Window allowing at most one zero
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <vector>
using namespace std;

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int left = 0;
        int zeroCount = 0;
        int maxLen = 0;

        for(int right = 0; right < nums.size(); right++){
            
            if(nums[right] == 0)
                zeroCount++;

            while(zeroCount > 1){
                if(nums[left] == 0)
                    zeroCount--;
                left++;
            }

            maxLen = max(maxLen, right - left);
        }

        return maxLen;
    }
};
