class Solution {
public:
    
    int solve(vector<int> &coins , int amount , vector<int>&dp)
    {
        if(amount == 0)
            return 0;
        
        if(dp[amount] != -1)
            return dp[amount];
        int minCnt = 1e6;
        for(int i=0;i<coins.size();i++)
        {
            if(coins[i] <= amount)
            {
                int curr = 1 + solve(coins , amount - coins[i] , dp);
                
                minCnt = min(minCnt , curr);
            }
        }
        
        return dp[amount] = minCnt;
    }
    int coinChange(vector<int>& coins, int amount) {
        
        vector<int> dp(amount+1 , -1);
        int res = solve(coins , amount ,dp);
        
        if(res == 1e6)
            return -1;
        return res;
    }

};