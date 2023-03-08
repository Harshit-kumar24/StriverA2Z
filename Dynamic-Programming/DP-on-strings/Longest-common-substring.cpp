 Approach 1:-
--------------
   
class Solution{
    public:
        int f(int i,int j,string x,string y,vector<vector<int>>& dp){
            
           if(i<0 || j<0) return 0;
        
        if(dp[i][j]!=-1) return dp[i][j];
        
        int ans = -1e9;
         if(x[i]==y[j]) ans =  1 + f(i-1,j-1,x,y,dp);
        else ans =  0;
        
        f(i-1,j,x,y,dp);
        f(i,j-1,x,y,dp);  
         
         return dp[i][j] = ans;
        }
        
    int longestCommonSubstr (string S1, string S2, int n, int m)
    {
        vector<vector<int>> dp(n,vector<int>(m,-1));
        f(n-1,m-1,S1,S2,dp);
        
        int ans = -1e9;
        for(int i =0;i<n;i++){
            for(int j =0;j<m;j++){
                ans = max(ans,dp[i][j]);
            }
        }
        return ans;
    }
};

 Appraoch 2:-
--------------
   
class Solution{
    public:
    int longestCommonSubstr (string S1, string S2, int n, int m)
    {
        vector<vector<int>> dp(n+1,vector<int>(m+1,0));
       
       int ans  = 0;
       
       for(int i =1;i<=n;i++){
           for(int j =1;j<=m;j++){
               if(S1[i-1]==S2[j-1]){
                   int temp = 1+ dp[i-1][j-1];
                   dp[i][j] = temp;
                   ans = max(ans,temp);
               }
               else{
                   dp[i][j] = 0;
               }
           }
       }
       return ans;
    }
};
