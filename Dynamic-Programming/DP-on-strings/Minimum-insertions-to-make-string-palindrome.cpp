 Approach 1:-
--------------
   
class Solution{
  public:
    int f(int i,int j,string a,string b,vector<vector<int>>& dp){
        if(i<0 || j<0) return 0;
        
        if(dp[i][j]!=-1) return dp[i][j];
        
        if(a[i]==b[j]) return 1+ f(i-1,j-1,a,b,dp);
        
        return dp[i][j] = max(f(i-1,j,a,b,dp),f(i,j-1,a,b,dp));
    }
  
    int countMin(string A) {
       int n = A.size();
       string a = A;
       reverse(A.begin(),A.end());
       vector<vector<int>> dp(n,vector<int>(n,-1));
       return int(n- f(n-1,n-1,a,A,dp));
    }
};

 Approach 2:-
--------------
   
class Solution {
public:
    int minInsertions(string s) {
          int n = s.size();
        string a = s;
        reverse(s.begin(),s.end());
        vector<vector<int>> dp(n+1,vector<int>(n+1,0));
        
        for(int i = 1;i<=n;i++){
            for(int j = 1;j<=n;j++){
                int ans = 0;
                if(a[i-1]==s[j-1]){
                    dp[i][j] = 1+ dp[i-1][j-1];
                }
                else{
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return n - dp[n][n];
    }
};
