class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        std::unordered_map<int, int> d;
        std::vector<int> out(queries.size(), 0);
        std::unordered_map<int, int> color_count;
        for (int i = 0; i < queries.size(); i++) {
            int ball = queries[i][0];
            int color = queries[i][1];

            if (d.count(ball)) {
                color_count[d[ball]]--;
                if (color_count[d[ball]] == 0) {
                    color_count.erase(d[ball]);
                }
            }

            d[ball] = color;
            color_count[color]++;
            out[i] = color_count.size();
        }
        return out;
    }
};