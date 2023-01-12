class Solution{
  public:

    int findFloor(vector<long long> v, long long n, long long x){
        
       int start = 0;
       int end = n-1;
       int ans = -1;
       
       while(start<=end){
           int mid = start+(end-start)/2;
           
           if(v[mid]==x){
               return mid;
           }
           else if(v[mid]>x){
               end = mid-1;
           }else{
               ans = mid;
               start = mid+1;
           }
       }
       return ans;
        
    }
};