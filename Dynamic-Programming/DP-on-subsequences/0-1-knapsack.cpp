 Approach 1:-
--------------
   
class Solution{
    public:
    int f(int ind,int w,int wt[],int val[],vector<vector<int>>& dp){
        
        if(ind==0){
            if(wt[0]<=w) return val[0];
            else return 0;
        }  
        
        if(dp[ind][w]!= -1) return dp[ind][w];
        
        int ntake = 0+f(ind-1,w,wt,val,dp);
        int take = INT_MIN;
        
        if(wt[ind]<=w){
            take = val[ind]+f(ind-1,w-wt[ind],wt,val,dp);
        }
        
        return dp[ind][w] =  max(ntake,take);
    }
    
    int knapSack(int W, int wt[], int val[], int n) { 
        vector<vector<int>> dp(n,vector<int>(W+1,-1));
            return f(n-1,W,wt,val,dp);
    }
};

 Approach 2:-
--------------
   
class Solution{
    public:
   
    int knapSack(int W, int wt[], int val[], int n) { 
        
        vector<vector<int>> dp(n,vector<int>(W+1,0));
        
        for(int i =wt[0];i<=W;i++) dp[0][i] = val[0];
        
        for(int i = 1;i<n;i++){
            for(int j = 0;j<=W;j++){
                
                int ntake = 0+dp[i-1][j];
                int take = INT_MIN;
                
                if(wt[i]<=j){
                    take = val[i]+dp[i-1][j-wt[i]];
                }
                dp[i][j] = max(take,ntake);
            }
        }
        return dp[n-1][W];
    }
};
