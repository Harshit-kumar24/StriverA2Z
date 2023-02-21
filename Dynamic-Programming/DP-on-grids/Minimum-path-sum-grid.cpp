 Approach 1:-

class Solution {
public:
    int f(int i,int j,vector<vector<int>>& grid,vector<vector<int>>& dp){
            if(i==0 && j==0) return grid[0][0];

            if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size()) return 1e9;

            if(dp[i][j]!=-1) return dp[i][j];
            
            int top = grid[i][j]+f(i-1,j,grid,dp);
            int left  = grid[i][j]+f(i,j-1,grid,dp);

            return dp[i][j] =  min(top,left);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        return f(n-1,m-1,grid,dp);

    }
};

 Approach 2:-
--------------
   
class Solution {
public:
    
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> dp(n,vector<int>(m,0));


        for(int i =0;i<n;i++){
            for(int j =0;j<m;j++){
                if(i==0 && j==0){
                    dp[0][0] = grid[0][0];
                    continue;
                }
                int top =1e9,left =1e9;
                if(i>0) top = dp[i-1][j]+grid[i][j];
                if(j>0) left = dp[i][j-1]+grid[i][j];

                dp[i][j] = min(top,left);
            }
        }

        return dp[n-1][m-1];

    }
};
