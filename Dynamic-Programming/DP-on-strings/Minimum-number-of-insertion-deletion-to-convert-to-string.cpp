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
	int minOperations(string str1, string str2) { 
	    int n = str1.size();
	    int m = str2.size();
	    
	    vector<vector<int>> dp(n,vector<int>(m,-1));
	    int ans = f(n-1,m-1,str1,str2,dp);
	    
	    if(ans!=min(n,m)) return abs((max(n,m)-ans)+abs(min(n,m)-ans));
	    
	    return abs(max(n,m)-ans);
	    
	} 
};

 Approach 2:-
--------------
   
class Solution {
public:
    int minDistance(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();

        vector<vector<int>> dp(n+1,vector<int>(m+1,0));

        for(int i = 1;i<=n;i++){
            for(int j = 1;j<=m;j++){
                if(word1[i-1]==word2[j-1]){
                    dp[i][j] = 1+ dp[i-1][j-1];
                }
                else{
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        int ans = dp[n][m];

          if(ans!=min(n,m)) return abs((max(n,m)-ans)+abs(min(n,m)-ans));
	    
	    return abs(max(n,m)-ans); 
    }
};
   
