class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> rows;
        vector<vector<int>> cols;

        for (int i = 0; i < n; i++) {
            rows.push_back(grid[i]);
        }

        for (int i = 0; i < n; i++) {
            vector<int> c;
            for (int j = 0; j < n; j++) {
                c.push_back(grid[j][i]);
            }

            cols.push_back(c);
        }

        int count = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (rows[i] == cols[j]) {
                    count += 1;
                }
            }
        }

        return count;
    }
};