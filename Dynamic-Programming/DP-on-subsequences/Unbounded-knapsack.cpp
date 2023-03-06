  Approach 1:-
----------------
    
class Solution{
public:
    int f(int ind,int target,int wt[],int val[],vector<vector<int>>& dp){
        
        if(ind==0){
                return (int(target/wt[0]))* val[0];
        }
        
        if(dp[ind][target]!=-1) return dp[ind][target];
        
        int ntake = f(ind-1,target,wt,val,dp);
        
        int take = INT_MIN; 
        
        if(wt[ind]<=target){
            take = val[ind]+f(ind,target-wt[ind],wt,val,dp);
        }
        
        return dp[ind][target] = max(take,ntake);
    }
    int knapSack(int N, int W, int val[], int wt[]){
        
       vector<vector<int>> dp(N,vector<int>(W+1,-1));
       return f(N-1,W,wt,val,dp);
    }
};

 Approach 2:-
---------------
   
class Solution{
    public:

    int knapSack(int N, int W, int val[], int wt[]){
        
       vector<vector<int>> dp(N,vector<int>(W+1,0));
       
       for(int i =0;i<=W;i++){
           dp[0][i] = (int(i/wt[0]))* val[0];
       }
       
       for(int i =1;i<N;i++){
           for(int j =0;j<=W;j++){
               int ntake = dp[i-1][j];
               int take = INT_MIN;
               if(wt[i]<=j){
                   take = val[i]+dp[i][j-wt[i]];
               }
               dp[i][j] = max(take,ntake);
           }
       }
       return dp[N-1][W];
    }
};
