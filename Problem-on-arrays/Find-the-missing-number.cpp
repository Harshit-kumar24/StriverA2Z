 Approach 1:-
--------------
   
int missingNumber(int A[], int N)
{
   int sum =0;
   for(int i =0;i<N-1;i++){
       sum+=A[i];
   }
   int ans = (N*(N+1)/2)-sum;
   return ans;
}
