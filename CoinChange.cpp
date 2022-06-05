//https://leetcode.com/problems/coin-change/


int coinChange(vector<int>& coins, int amount) {
        int dp[amount+1];
        memset(dp, 1e6, sizeof(dp));
        dp[0] = 0;
        for(int i= 1; i <= amount; i++){
            for(int j = 0; j < coins.size(); j++){
                if(coins[j] <= i){
                    dp[i] = min(dp[i], 1+dp[i-coins[j]]);
                }
            }
        }
        if(dp[amount] > amount){
            return -1;
        }else{
            return dp[amount];
        }
}
