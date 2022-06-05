int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int minn = INT_MAX, maxx = INT_MIN;
        for(int i = 0; i < n; i++){
            if(prices[i] < minn){
                minn = prices[i];
            }else{
                maxx = max(maxx, prices[i] - minn);
            }
        }
        return max(maxx,0);
}
