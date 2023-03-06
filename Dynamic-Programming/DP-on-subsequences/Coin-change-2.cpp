 Approach 1:-
---------------
   
class Solution {
public:
    int f(int n,int t,vector<int>&coin,vector<vector<int>>& dp){
        if(n==0)
            return(t%coin[0]==0);

        if(dp[n][t]!=-1) return dp[n][t];

        int nottake=f(n-1,t,coin,dp);
        int take=0;
        if(coin[n]<=t) take=f(n,t-coin[n],coin,dp);
        return dp[n][t] = (take+nottake);
    }
    
    int change(int amount, vector<int>& coins) {

        int n=coins.size();
        vector<vector<int>> dp(n,vector<int>(amount+1,-1));
        return f(n-1,amount,coins,dp);
    }
};

 Approach 2:-
--------------
   
class Solution {
public:
    int change(int amount, vector<int>& coins) {

        int n=coins.size();
        vector<vector<int>> dp(n,vector<int>(amount+1,0));

        for(int i =0;i<=amount;i++){
            dp[0][i] = (i%coins[0]==0); 
        }

        for(int i = 1;i<n;i++){
            for(int j = 0;j<=amount;j++){
                
                int ntake = dp[i-1][j];
                int take = 0;
                if(coins[i]<=j){
                    take = dp[i][j-coins[i]];
                }
                dp[i][j] = take + ntake;
            }
        }
        return dp[n-1][amount];
    }
};
