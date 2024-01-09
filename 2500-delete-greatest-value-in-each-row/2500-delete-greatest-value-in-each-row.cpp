class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        for (int i=0;i<grid.size();i++){
            sort(grid[i].begin(), grid[i].end());
        }
        
        int row_size = grid[0].size();
        int total = 0;
        while (row_size > 0) {
            int mx = 0;
            for (int i=0;i<grid.size();i++){
                vector<int>row = grid[i];
                int row_max = row[row.size()-1];
                if (row_max > mx){
                    mx = row_max;
                }
                grid[i].pop_back();
            }
            total += mx;
            
            row_size -= 1;
        }
        
        return total;
    }
};