class Solution {
public:
    int minOperations(string s) {
        int n = s.length();
        
        bool is_sorted = true;
        for (int i = 0; i < n - 1; i++) {
            if (s[i] > s[i+1]) {
                is_sorted = false;
                break;
            }
        }
        if (is_sorted) return 0;
        
        if (n <= 2) return -1;
        
        char min_c = s[0], max_c = s[0];
        for(char c : s) {
            min_c = min(min_c, c);
            max_c = max(max_c, c);
        }
        
        if (s[0] == min_c || s[n-1] == max_c) return 1;
    
        if (s[0] == max_c && s[n-1] == min_c) {

            bool min_somewhere_else = false;
            for(int i = 0; i < n - 1; i++) if(s[i] == min_c) min_somewhere_else = true;
            
            bool max_somewhere_else = false;
            for(int i = 1; i < n; i++) if(s[i] == max_c) max_somewhere_else = true;
            
            if (min_somewhere_else || max_somewhere_else) return 2;
            return 3;
        }
        
        return 2;
    }
};
