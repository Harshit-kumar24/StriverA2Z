 Approach 1:-
---------------

class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        int *ans = new int[2];
        vector<int> freq(n+1,0);
        
        for(int i =0;i<n;i++){
            freq[arr[i]]++;
        }
        
        for(int i =1;i<=n;i++){
            
            if(freq[i]==0){
                ans[1] = i;
             
            }
            if(freq[i]>1){
                ans[0] = i;
                
            }
        }
    
       return ans;
    }
};

 Approach 2:-
---------------

class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        int *ans = new int[2];
       unordered_map<int,int> freq;
        
        int sum =0;
        for(int i =0;i<n;i++){
            freq[arr[i]]++;
            
        }
        
      
        for(auto it: freq){
            sum+=it.first;
            if(it.second>1){
                ans[0] = it.first;
                
            }
            
        }
        ans[1] = (n*(n+1)/2)-sum;
    
       return ans;
    }
};

 Approach 3:-
---------------


