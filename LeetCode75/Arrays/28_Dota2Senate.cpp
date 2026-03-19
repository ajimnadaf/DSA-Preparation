// Problem: Dota2 Senate
// Platform: LeetCode 75
// Approach: Use two queues to simulate banning process
// Time Complexity: O(n)
// Space Complexity: O(n)
class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> r, d;
        int n = senate.size();

        // Step 1: store indices
        for(int i = 0; i < n; i++){
            if(senate[i] == 'R')
                r.push(i);
            else
                d.push(i);
        }

        // Step 2: simulate rounds
        while(!r.empty() && !d.empty()){
            int rIndex = r.front(); r.pop();
            int dIndex = d.front(); d.pop();

            if(rIndex < dIndex){
                // Radiant bans Dire
                r.push(rIndex + n);
            } else {
                // Dire bans Radiant
                d.push(dIndex + n);
            }
        }

        return r.empty() ? "Dire" : "Radiant";
    }
};
