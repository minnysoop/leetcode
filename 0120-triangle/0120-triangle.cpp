class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        vector<int>dp = triangle[n-1];
        
        int i = n-2;
        while (i >= 0){
            for (int j=0;j<=i;j++){
                dp[j] = min(dp[j], dp[j+1]) + triangle[i][j];
            }
            
            i--;
        }
        
        return dp[0];
    }
};