 Approach 1:-
--------------
   
class Solution{
    public:
    
    int f(int ind,int *arr,int n,vector<int>& dp){
        if(dp[ind]!=-1) return dp[ind];
        if(ind==0) return arr[ind];
        if(ind<0) return 0;
        
        int pick = arr[ind]+f(ind-2,arr,n,dp);
        int npick = f(ind-1,arr,n,dp);
        
        return dp[ind] = max(pick,npick);
    }
    
    int FindMaxSum(int arr[], int n){
	    vector<int> dp(n,-1);
	    return f(n-1,arr,n,dp);
    }
};

Approach 2:-
--------------
   
class Solution{
public:	
	int findMaxSum(int *arr, int n) {
	    vector<int> dp(n,0);
	    
	    dp[0] = arr[0];
	    
	    for(int i = 1;i<n;i++){
	        int pick =arr[i],npick = INT_MIN;
	        if(i>1){
	            pick +=dp[i-2];
	        }
	            npick = dp[i-1];
	        
	        dp[i] = max(pick,npick);
	    }
	    return dp[n-1];
	}
};
