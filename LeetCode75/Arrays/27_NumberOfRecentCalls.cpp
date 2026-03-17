// Problem: Number of Recent Calls
// Platform: LeetCode 75
// Approach: Use queue to maintain sliding window of last 3000 ms
// Time Complexity: O(n)
// Space Complexity: O(n)
class RecentCounter {
public:
    queue<int> q;

    RecentCounter() {
        
    }
    
    int ping(int t) {
        // Step 1: current request add karo
        q.push(t);

        // Step 2: old requests hatao
        while(!q.empty() && q.front() < t - 3000){
            q.pop();
        }

        // Step 3: remaining size return karo
        return q.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
