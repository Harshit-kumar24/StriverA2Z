 Approach 1:-
---------------
   
class Solution {
  public:
  bool check(vector<int> & piles,int mid,int hours){
      long long int sum =0;
      
      for(int i =0;i<piles.size();i++){
          sum+=piles[i]/mid;
          if(piles[i]%mid) sum++;
      }
      if(sum>hours) return false;
      return true;
  }
  
    int Solve(int N, vector<int>& piles, int H) {
       int end = *max_element(piles.begin(),piles.end());
       int start = 1;
       int ans = -1;
       
       
       while(start<=end){
           int mid = start+(end-start)/2;
           
           if(check(piles,mid,H)){
               ans = mid;
               end = mid-1;
           }
           else{
               start = mid+1;
           }
       }
       return ans;
    }
};
