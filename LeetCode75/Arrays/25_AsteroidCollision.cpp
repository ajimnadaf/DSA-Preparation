// Problem: Asteroid Collision
// Platform: LeetCode 75
// Approach: Use stack to simulate asteroid collisions
// Time Complexity: O(n)
// Space Complexity: O(n)
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> st;

        for(int a : asteroids){

            bool destroyed = false;

            while(!st.empty() && a < 0 && st.back() > 0){

                if(abs(a) > st.back()){
                    st.pop_back();
                    continue;
                }
                else if(abs(a) == st.back()){
                    st.pop_back();
                }

                destroyed = true;
                break;
            }

            if(!destroyed)
                st.push_back(a);
        }

        return st;
    }
};
