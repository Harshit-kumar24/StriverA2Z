 Approach 1:-
--------------
   
class Solution {
  public:
  
  bool possible(vector<int>& bloomDay,long check,int req,int k){
      
      long cnt = 0, ans =0;
      for(int i = 0; i < bloomDay.size(); i++){
        
          if(bloomDay[i]>check){
              cnt = 0;
          }
          if(bloomDay[i]<=check){
              cnt++;
          }
          if(cnt==k){
              ans++;
              cnt =0;
          }
      }
      if(ans>=req) return true;
      
      return false;

  }
  
    int solve(int M, int K, vector<int> &bloomDay){
        
      if(M*K > (int)bloomDay.size()) return -1;
      
      long start = *min_element(bloomDay.begin(),bloomDay.end());
      long end = *max_element(bloomDay.begin(),bloomDay.end());
      
      int ans = -1;
      
      while(start<=end){
          long mid = start+(end-start)/2;
          
          if(possible(bloomDay,mid,M,K)){
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
   
