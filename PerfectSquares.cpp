int numSquares(int n) {
        vector<int> v;
        int s = 1;
        while(s*s<= n){
            v.push_back(s*s);
            s++;
        }
        vector<int> dp(n+1, INT_MAX);
        dp[0] = 0;
        for(int i = 1; i <= n; i++){
            for(auto x: v){
                if(i>= x){
                    dp[i] = min(dp[i], dp[i-x]+1);
                }
            }
        }
        return dp[n];
        
    
    }
};
