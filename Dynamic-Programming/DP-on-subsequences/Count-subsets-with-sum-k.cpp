 Approach 1:-
--------------
   
#define MOD 1000000007
class Solution{
	public:
    int f(int i,int arr[],int n,int sum,int s,vector<vector<int>>&dp){
       if(s>sum)return 0;  
        
        if(i==n){
            if(s==sum){
                return 1;
            }
            else return 0;
        }
        
        if(dp[i][s]!=-1)return dp[i][s];
         s+=arr[i];

         int take = f(i+1,arr,n,sum,s,dp);
         s-=arr[i];
          int nottake = f(i+1,arr,n,sum,s,dp);

          return dp[i][s]=(take + nottake)%MOD;
}

 int perfectSum(int arr[], int n, int sum){

     int s = 0;
 vector<vector<int>>dp(n,vector<int>(sum+1,-1));
        return f(0,arr,n,sum,s,dp);

 }   

};

 Approach 2:-
--------------
   
