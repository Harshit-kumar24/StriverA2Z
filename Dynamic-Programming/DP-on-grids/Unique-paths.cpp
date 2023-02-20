 Approach 1:-
--------------
 
class Solution{
 public:
    int f(int left,int up,vector<vector<int>>& dp){
        if(left==0 && up==0) return 1;
        
        if(left<0 || up<0) return 0;
       
       if(dp[left][up]!=-1) return dp[left][up];
        
        int l = f(left-1,up,dp);
        int u = f(left,up-1,dp);
        
        return dp[left][up] = l+u;
    }
    int NumberOfPath(int a, int b){
        vector<vector<int>> dp(a,vector<int>(b,-1));
        return f(a-1,b-1,dp);
        
    }
};

 Approach 2:-
--------------
   
class Solution{
 public:

    int NumberOfPath(int a, int b){
        vector<vector<int>> dp(a,vector<int>(b,0));
        
        for(int i =0;i<a;i++){
            for(int j = 0;j<b;j++){
                if(i==0 && j==0){
                    dp[i][j] = 1;
                    continue;
                }
                int left =0,up =0;
                 if(i>0) left = dp[i-1][j];
                 if(j>0) up = dp[i][j-1];
                
                dp[i][j] = left+up;
                
            }
        }
        return dp[a-1][b-1];
    }
};
