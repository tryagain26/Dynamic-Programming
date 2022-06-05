int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int dp[n+1][m+1];
        for(int i = 0; i < m; i++){
            dp[0][i] = matrix[0][i];
        }
        for(int i = 1; i < n; i++){
            for(int j = 0; j < m; j++){
                if(j == 0){
                    dp[i][j] = min(dp[i-1][j], dp[i-1][j+1]) + matrix[i][j];
                }else if(j == matrix[i].size()-1){
                    dp[i][j] = min(dp[i-1][j], dp[i-1][j-1])+ matrix[i][j];
                }else{
                    dp[i][j] = min(min(dp[i-1][j], dp[i-1][j-1]), dp[i-1][j+1]) + matrix[i][j];
                }
            }
        }
        int ans = 1e8;
        for(int i = 0; i < m; i++){
            ans = min(ans , dp[n-1][i]);
        }
        return ans;
}
