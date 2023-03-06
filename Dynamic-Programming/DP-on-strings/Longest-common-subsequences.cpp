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
    
    int lcs(int x, int y, string s1, string s2){
           
        vector<vector<int>> dp(x,vector<int>(y,-1));        
        return f(x-1,y-1,s1,s2,dp);
    }
};

 Approach 2:-
--------------
   
class Solution{
    public:
    int lcs(int x, int y, string s1, string s2){
        vector<vector<int>> dp(x+1,vector<int>(y+1,0));        
        
        for(int i =0;i<=x;i++){
            dp[0][i] = 0;
        }
    
        for(int j =0;j<=y;j++){
            dp[j][0] = 0;
        }
        
        for(int i = 1;i<=x;i++){
            for(int j = 1;j<=y;j++){
                
                 if(s1[i-1] == s2[j-1]){
                     dp[i][j] = 1 + dp[i-1][j-1];
                 }
                 
                else dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
            }
        }
        
        return dp[x][y];
    }
};
