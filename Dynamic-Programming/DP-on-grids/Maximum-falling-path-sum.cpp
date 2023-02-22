 Approach 1:-
--------------
   
  class Solution{
public:
    int f(int i,int j,vector<vector<int>>& grid,vector<vector<int>>& dp){
        if( j<0 || j>=grid[0].size()){
            return -1e9;
        }
        if(i==0) return grid[0][j];
        
        if(dp[i][j]!=-1) return dp[i][j];
        
        int a = grid[i][j]+f(i-1,j,grid,dp);
        int b = grid[i][j]+f(i-1,j+1,grid,dp);
        int c = grid[i][j]+f(i-1,j-1,grid,dp);
        
        return dp[i][j] = max({a,b,c});
        
    }
    
    int maximumPath(int N, vector<vector<int>> Matrix)
    {
        vector<vector<int>> dp(N,vector<int>(N,-1));
        int ans = INT_MIN;
        for(int i =0;i<Matrix[N-1].size();i++){
                 ans = max(ans,f(N-1,i,Matrix,dp));
            
        }
        return ans;
        
    }
};

 Approach 2:-
--------------
   
class Solution{
public:
    
    int maximumPath(int N, vector<vector<int>> Matrix)
    {
        vector<vector<int>> dp(N,vector<int>(N,0));
        int ans = INT_MIN;
        
        for(int j =0;j<N;j++){
            dp[0][j] = Matrix[0][j];
        }
        
        for(int i = 1;i<N;i++){
            for(int j = 0;j<N;j++){
                
                int a =-1e9,b =-1e9,c =-1e9;
                
                if(i>0) a = Matrix[i][j]+dp[i-1][j];
                if(i>0 && j<N-1) b =  Matrix[i][j]+dp[i-1][j+1];
                if(i>0 && j>0) c =  Matrix[i][j]+dp[i-1][j-1];

                
                dp[i][j] = max({a,b,c});
            }
        }
        
        for(int j =0;j<N;j++){
            ans = max(ans,dp[N-1][j]);
        }
        return ans;
        
        
        
    }
};
