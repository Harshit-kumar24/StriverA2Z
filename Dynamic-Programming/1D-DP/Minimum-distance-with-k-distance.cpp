 Approach 1:-
--------------
   
class Solution {
  public:
    int f(int ind,vector<int>& height,int k,vector<int>& dp){
        if(ind==0){
            return 0;
        }
        
      if(dp[ind]!=-1) return dp[ind];
        int sum =INT_MAX;
        for(int i = 1;i<=k;i++){
             if(ind-i>=0){
                 int step = f(ind-i,height,k,dp)+abs(height[ind]-height[ind-i]);
                 sum = min(step,sum);
             }
        }
        return dp[ind] = sum;
    }
    int minimizeCost(vector<int>& height, int n, int k) {
       vector<int> dp(n+1,-1);
        return f(n-1,height,k,dp);
    }
};

 Approach 2:-
--------------
   
class Solution {
  public:

    int minimizeCost(vector<int>& height, int n, int k) {
       vector<int> dp(n+1,0);
        
        dp[0] = 0;
        
        for(int i =1;i<n;i++){
            int sum = INT_MAX;
            for(int j =1 ;j<=k;j++){
                if(i-j>=0){
                    int step = dp[i-j]+abs(height[i]-height[i-j]);
                    sum = min(step,sum);
                }
            }
            dp[i] = sum;
        }
        return dp[n-1];
    }
};
   
