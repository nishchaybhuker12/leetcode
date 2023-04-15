class Solution{
    public:
    // declare a dp
    
    int dp[1005][2005];
    
    int helper(vector<vector<int>>& piles, int i, int n, int k)
    {
        // base case
        
        if(i == n || k == 0)
            return 0;
        
        // if alreday claculated
        
        if(dp[i][k] != -1)
            return dp[i][k];
        
        int max_sum = 0;
        
        // inclusion part
        
        for(int pos = 0; pos < piles[i].size(); pos++)
        {
            if(k - pos - 1 >= 0)
            {
                max_sum = max({max_sum, piles[i][pos] + helper(piles, i + 1, n, k - pos - 1), helper(piles, i + 1, n, k)});
            }
        }
        
        // exclusion part
        
         max_sum = max(max_sum, helper(piles, i + 1, n, k));
        
        // store the result and return it
        
        return dp[i][k] = max_sum;
    }
    
    int maxValueOfCoins(vector<vector<int>>& piles, int k) {
        
        int n = piles.size();
        
        // calculate the prefix sum of each row
        
        for(int i = 0; i < n; i++)
        {
            for(int j = 1; j < piles[i].size(); j++)
            {
                piles[i][j] += piles[i][j - 1];
            }
        }
        
        // initialize dp with -1
        
        memset(dp, -1, sizeof(dp));
        
        return helper(piles, 0, n, k);
}
};