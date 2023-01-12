 Approach 1:-
--------------
   
 long long maxSubarraySum(int arr[], int n){
        
        int msum = INT_MIN;
      for(int i =0;i<n;i++){
          for(int j =i;j<n;j++){
              int sum = 0;
              for(int k = i;k<=j;k++){
                    sum+=arr[k];
              }
              msum = max(sum,msum);
          }
      }
        return msum;
    }
};

Approach 2:-
--------------
  
long long maxSubarraySum(int arr[], int n){
        
        int msum = INT_MIN;
      for(int i =0;i<n;i++){
          int sum =0;
          for(int j =i;j<n;j++){
                sum+=arr[j];
                msum = max(sum,msum);
          }
      }
        return msum;
    }
};

 Approach 3:-
---------------
   
long long maxSubarraySum(int arr[], int n){
        
       int csum =0,msum = -1e9;
       
       for(int i =0;i<n;i++){
           csum+=arr[i];
           msum = max(csum,msum);
           if(csum<0){
               csum =0;
           }
        
        
       }
       return msum;
    }
};
   
