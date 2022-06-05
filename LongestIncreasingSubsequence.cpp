 int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        int F[n+1];
        memset(F, 0, sizeof(F));
        F[0] = 1;
        for(int i =1;i < n; i++){
            for(int j =  0; j < i; j++){
                if(nums[j] < nums[i] && F[j]>F[i]){
                    F[i] = F[j];
                }
            }
            F[i]++;
        }
        int ans = INT_MIN;
        for(auto x: F){
            ans = max(ans, x);
        }
        return ans;
    }
