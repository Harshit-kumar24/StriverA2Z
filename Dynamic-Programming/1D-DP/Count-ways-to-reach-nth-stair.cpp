 Approach 1:-
--------------
   
   
   
 Approach 2:-
--------------
   
class Solution
{
    public:
    int countWays(int n)
    {
        int MOD = 1e9+7;
       vector<int> dp(n+1,0);
       dp[0] = 1;
       dp[1] = 1;
       
       for(int i = 2;i<=n;i++){
           dp[i] = (dp[i-1]+dp[i-2])%MOD;
       }
       return dp[n];
    }
};

 Approach 3:-
--------------
   
class Solution
{
    public:
    int countWays(int n)
    {
        int MOD = 1e9+7;
      int prev1 = 1;
       int prev2 = 1;
       int curr =0;
       
       for(int i = 2;i<=n;i++){
          curr = (prev1+prev2)%MOD;
          prev1 = prev2;
          prev2 = curr;
       }
       return prev2;
    }
};

