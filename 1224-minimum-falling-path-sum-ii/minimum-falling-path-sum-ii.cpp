class Solution {
public:
    int getAns(vector<vector<int>>&grid,int n,int prev,vector<vector<int>>&dp){
        if(n==0){
            int mini=1e8;
            for(int i=0;i<grid.size();i++){
                if(i!=prev){
                    mini=min(mini,grid[n][i]);
                }
            }
            return mini;
        }
        if(dp[n][prev]!=-1)return dp[n][prev];
        int mini=1e8;
        for(int day=0;day<grid.size();day++){
            if(day!=prev){
               int activity=grid[n][day]+getAns(grid,n-1,day,dp);
               mini=min(mini,activity);
            }
        }
        return dp[n][prev]=mini;
    }
    int minFallingPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
        return getAns(grid,n-1,n,dp);
    }
};