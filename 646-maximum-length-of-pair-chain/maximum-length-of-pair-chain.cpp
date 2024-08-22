class Solution {
public:
int solve(int index, int prev, vector<vector<int>>& pairs ,vector<vector<int>>&dp){
    if (index == pairs.size())   return 0;
    if (dp[index][prev+1] != -1)   return dp[index][prev+1];
        
    int take = 0 ,  not_take = 0;
    not_take = 0 + solve(index + 1, prev,  pairs, dp);
    if (prev == -1 and pairs[0][1] > pairs[0][0] or pairs[prev][1] < pairs[index][0])
        {
            take = 1 + solve(index + 1 ,index,  pairs, dp);
        }
        return dp[index][prev+1] = max(take,not_take);
    }


    static bool compare(vector<int>&v1,vector<int>&v2)
    {
        return v1[1]<v2[1];
    }

    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(),pairs.end());
        int index = 0;
        int prev = -1;
        int n = pairs.size();
        vector<vector<int>>dp(n+1,vector<int>(n,-1));
        return solve(index, prev, pairs,dp) ;
    }
};







     
    