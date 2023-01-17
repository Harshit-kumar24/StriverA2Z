 Approach 1:-
---------------

class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
       int ma= INT_MIN;
       
       for(int i =0;i<N;i++){
           int cnt =0;
           for(int j =i;j<N;j++){
               cnt+=A[j];
               if(cnt==K){
                   ma = max(ma,j-i+1);
               }
           }
       }
       return ma;
       
    } 
};

 Approach 2:-
--------------

class Solution{
    public:
    int lenOfLongSubarr(int arr[],  int n, int k) 
    { 
       int sum = 0;
       int size = 0, max_size = 0;
       unordered_map<int, int> mp;
       
       mp.insert({0, -1});
       
       for(int i=0; i<n; i++)
       {
           sum += arr[i];
           if(mp.find(sum - k) != mp.end())
           {
               size = i - mp[sum - k];
               max_size = max(max_size, size);
           }
           mp.insert({sum, i});
       }
       return max_size;
       
    } 

};