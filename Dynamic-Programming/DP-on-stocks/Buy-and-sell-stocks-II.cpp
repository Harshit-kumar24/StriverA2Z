 Approach 1:-
--------------
   
class Solution{
    public:
    
    long long f(int ind,int buy,int n,vector<long long>& prices,vector<vector<long long>>& dp){
        if(ind==n){
            return 0;
        }
        
        if(dp[ind][buy]!=-1) return dp[ind][buy];
        
        long long profit;
        
        if(buy==0){
            profit = max(f(ind+1,0,n,prices,dp),-prices[ind]+f(ind+1,1,n,prices,dp));
        }
        else{
            profit = max(f(ind+1,1,n,prices,dp),prices[ind]+f(ind+1,0,n,prices,dp));
        }
        return dp[ind][buy] = profit;
    }
    
    long long maximumProfit(vector<long long>&prices, int n) {
       
       vector<vector<long long>> dp(n,vector<long long>(2,-1));
       long long ans = f(0,0,n,prices,dp);
       return ans;
    }
};

 Approach 2:-
--------------
   
class Solution{
    public:
    
    long long maximumProfit(vector<long long>&prices, int n) {
       
       vector<vector<long long>> dp(n+1,vector<long long>(2,-1));
       
       dp[n][0] = dp[n][1] = 0;
       
       for(int i =n-1;i>=0;i--){
           for(int j =0;j<2;j++){
               long long profit;
               
               if(j==0){
                   profit = max(dp[i+1][0],dp[i+1][1]-prices[i]);
               }
               else{
                   profit = max(dp[i+1][1],dp[i+1][0]+prices[i]);
               }
               dp[i][j] = profit;
           }
       }
       return dp[0][0];
    }
};
