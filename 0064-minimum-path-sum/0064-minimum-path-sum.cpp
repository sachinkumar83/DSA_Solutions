class Solution {
public:
    
    int solve(int r, int c,vector<vector<int>>&dp, vector<vector<int>>&grid){
        if(r==0 && c==0) return grid[0][0];
        
        if(c<0 || r<0 || r>=grid.size()|| c>= grid[0].size() ) return 1e8;
        
        if(dp[r][c] != -1) return dp[r][c];
        
        return dp[r][c]=min(solve(r,c-1,dp,grid) , solve(r-1,c,dp,grid)) + grid[r][c];
        
    }
    
    int minPathSum(vector<vector<int>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        vector<vector<int>>dp(r,vector<int>(c,-1));
        return solve(r-1,c-1,dp,grid);
    }
    
    
    //  0,0--> 
};