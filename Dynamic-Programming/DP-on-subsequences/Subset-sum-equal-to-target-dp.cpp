 Approach 1:-
--------------
   
class Solution{   
    public:
    bool f(int ind,int target,vector<int>& nums,vector<vector<int>>& dp){
        if(target==0) return true;
        if(ind==0){
            if(nums[0]==target){
            return true;
          }
          return false;
        }    
        if(dp[ind][target]!=-1) return dp[ind][target];
        int npick = f(ind-1,target,nums,dp);
        int pick = 0;
        if(nums[ind]<=target){
            pick = f(ind-1,target-nums[ind],nums,dp);
        }
        
        return dp[ind][target] =( npick || pick);
    }
    
    bool isSubsetSum(vector<int>arr, int sum){
        int n = arr.size();
        vector<vector<int>> dp(n,vector<int>(sum+1,-1));
       return f(n-1,sum,arr,dp);
       
    }
};

 Approach 2:-
--------------
   
class Solution{   
    public:
    bool isSubsetSum(vector<int>arr, int sum){
        int n = arr.size();
        int target = sum;
        vector<vector<int>> dp(n,vector<int>(sum+1,0));
        
        for(int j = 0;j<n;j++){
            dp[j][0] = true; 
        }
        
        if(arr[0]<=target){
            dp[0][arr[0]] = true;
        }
        
        for(int i =1;i<n;i++){
            for(int j = 1;j<=target;j++){
                
                int ntake = dp[i-1][j];
                int take = 0;
                
                if(arr[i]<=j){
                    take = dp[i-1][j-arr[i]];
                }
                
                dp[i][j] = ntake || take;
            }
        }
       return dp[n-1][target];
    }
};
