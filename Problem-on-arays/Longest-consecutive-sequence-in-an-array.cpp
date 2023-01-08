 Approach 1:-
--------------
   
class Solution{
  public:
   
    int findLongestConseqSubseq(int arr[], int N)
    {
      int ans =1;
      
      sort(arr,arr+N);
        int prev = arr[0];
        int csum = 1;
        
        for(int i =1;i<N;i++){
            if(arr[i]==prev+1){
                csum++;
            }else if(arr[i]!=prev){
                csum = 1;
            }
            prev = arr[i];
            ans = max(ans,csum);
        }
     
      return ans;
    }
};

 Approach 2:-
--------------
   
class Solution{
  public:
   
    int findLongestConseqSubseq(int arr[], int N)
    {
     int ans = 1;
     set<int> s;
     
     for(int i =0;i<N;i++){
         s.insert(arr[i]);
     }
     
     for(int i =0;i<N;i++){
         if(!s.count(arr[i]-1)){
             int currentNum = arr[i];
             int currentstreak = 1;
             
             while(s.count(currentNum+1)){
                 currentstreak++;
                 currentNum++;
             }
             
             ans = max(ans,currentstreak);
         }
     }
      return ans;
    }
};
