// Problem: Unique Number of Occurrences
// Platform: LeetCode 75
// Approach: Count frequency using unordered_map and check uniqueness using unordered_set
// Time Complexity: O(n)
// Space Complexity: O(n)
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> freq;
        
        // Count occurrences
        for(int num : arr){
            freq[num]++;
        }
        
        unordered_set<int> seen;
        
        // Check if frequencies are unique
        for(auto it : freq){
            if(seen.count(it.second))
                return false;
            seen.insert(it.second);
        }
        
        return true;
    }
};
