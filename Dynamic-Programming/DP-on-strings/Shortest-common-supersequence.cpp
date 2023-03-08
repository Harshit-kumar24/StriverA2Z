 Approach 1:-
--------------
   

class Solution{
  public:
     int f(int i,int j,string x,string y,vector<vector<int>>& dp){
         if(i<0 || j<0) return 0;
        
         if(x[i]==y[j]) return 1 + f(i-1,j-1,x,y,dp);
         
        if(dp[i][j]!=-1) return dp[i][j];
         
         return dp[i][j] = max(f(i-1,j,x,y,dp),f(i,j-1,x,y,dp));
     }
    
    int shortestCommonSupersequence(string X, string Y, int m, int n)
    {
        vector<vector<int>> dp(m,vector<int>(n,-1));
        int ans = f(m-1,n-1,X,Y,dp);
        
        return m+n-ans;
    }
};

 Approach 2:-
--------------
   
class Solution{
  public:
    
    int shortestCommonSupersequence(string X, string Y, int m, int n){
        vector<vector<int>> dp(m+1,vector<int>(n+1,0));    
        for(int i = 1;i<=m;i++){
            for(int j = 1;j<=n;j++){
                
                if(X[i-1]==Y[j-1]){
                    dp[i][j] = 1+ dp[i-1][j-1];
                }
                else{
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return m+n-dp[m][n];
    }
};
