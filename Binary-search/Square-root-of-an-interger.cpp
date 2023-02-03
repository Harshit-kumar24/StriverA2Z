 Approach 1:-
--------------
   
#define ll long long int
class Solution{
  public:
  long long int floorSqrt(long long int x) 
   {
       int s = 0, e = x;
       ll ans = 0;
       while(s <= e){
           long long int mid = s+(e-s)/2;
           if(mid*mid == x){
               ans = mid;
               break;
           }
           else if(mid*mid < x){
               ans = mid;
               s = mid+1;
           }
           else
               e = mid-1;
       }
       return ans;
   }
};
