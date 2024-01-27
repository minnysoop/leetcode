class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int g[m][n];
        
        for (int i=0;i<m;i++){
            for (int j=0;j<n;j++){
                if (i == 0 && j == 0){
                    g[i][j] = grid[i][j];
                }
                else if (i == 0){
                    g[i][j] = grid[i][j] + g[i][j-1];
                }
                else if (j == 0){
                    g[i][j] = grid[i][j] + g[i-1][j];
                }
                else {
                    g[i][j] = grid[i][j] + min(g[i][j-1], g[i-1][j]);
                }
            }
        }
        
        return g[m-1][n-1];
    }
};