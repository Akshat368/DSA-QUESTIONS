class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        unordered_map<int, vector<int>> adj;
        for (auto& p : adjacentPairs) {
            adj[p[0]].push_back(p[1]);
            adj[p[1]].push_back(p[0]);
        }

        int start = 0;
        for (auto& [node, nbrs] : adj) {
            if (nbrs.size() == 1) {
                start = node;
                break;
            }
        }

        int n = adjacentPairs.size() + 1;
        vector<int> res;
        res.reserve(n);

        int prev = INT_MAX;
        int curr = start;

        while (res.size() < n) {
            res.push_back(curr);
            int next = INT_MAX;
            for (int x : adj[curr]) {
                if (x != prev) next = x;
            }
            prev = curr;
            curr = next;
        }
        return res;
    }
};