class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,int> lost_map;  // ordered map, toh sorting free mein ho jayegi

        for (auto& m : matches) {
            int winner = m[0];
            int loser  = m[1];
            lost_map[winner] += 0;  // winner ko register karo
            lost_map[loser]++;      // loser ka loss count badhao
        }

        vector<int> notLost, lostOnce;
        for (auto& [player, losses] : lost_map) {
            if (losses == 0) notLost.push_back(player);
            else if (losses == 1) lostOnce.push_back(player);
        }

        return {notLost, lostOnce};
    }
};