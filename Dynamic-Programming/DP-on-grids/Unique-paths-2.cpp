 Approach 1:-
--------------
   
#define MOD 1000000007
class Solution {
  public:
  int f(int i,int j,vector<vector<int>>& grid,vector<vector<int>>& dp){

      if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || grid[i][j]==1){
          return 0;
      }
      if(i==0 && j==0){
          return 1;
      }
      if(dp[i][j]!=-1) return dp[i][j];

      int top = f(i-1,j,grid,dp);
      int left = f(i,j-1,grid,dp);
      
      return dp[i][j] = (top+left)%MOD;
      
  }
    int totalWays(int n, int m, vector<vector<int>>& grid) {
        vector<vector<int>> dp(n,vector<int>(m,-1));
        return f(n-1,m-1,grid,dp)%MOD;
    }
};

 Approach 2:-
--------------
   
#define MOD 1000000007
class Solution {
  public:

    int totalWays(int n, int m, vector<vector<int>>& grid) {
        vector<vector<int>> dp(n,vector<int>(m,0));
        
        for(int i =0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(grid[i][j]==1){
                    dp[i][j] = 0;
                    continue;
                }
                
                if(i==0 && j==0){
                    dp[i][j] = 1;
                    continue;
                }
                int bottom  = 0,right =0;
                if(i>0) bottom = dp[i-1][j];
                if(j>0) right = dp[i][j-1];
                
                dp[i][j] = (bottom+right)%MOD;
            }
        }
        return dp[n-1][m-1];
    }
};
