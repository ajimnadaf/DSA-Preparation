class Solution {
   
    map<pair<int, int>, long long> memo;
    vector<int> pref;
    long long eCost, fCost;

    long long solve(int start, int len) {
        if (memo.count({start, len})) return memo[{start, len}];

        int x = pref[start + len] - pref[start];
        
        long long currentCost;
        if (x == 0) {
            currentCost = fCost;
        } else {
            currentCost = (long long)len * x * eCost;
        }

        if (len % 2 == 0) {
            int half = len / 2;
            long long splitCost = solve(start, half) + solve(start + half, half);
            currentCost = min(currentCost, splitCost);
        }

        return memo[{start, len}] = currentCost;
    }

public:
    long long minCost(string s, int encCost, int flatCost) {
        int n = s.length();
        eCost = encCost;
        fCost = flatCost;
        pref.assign(n + 1, 0);
        memo.clear();

        for (int i = 0; i < n; i++) {
            pref[i + 1] = pref[i] + (s[i] == '1' ? 1 : 0);
        }

        return solve(0, n);
    }
};
