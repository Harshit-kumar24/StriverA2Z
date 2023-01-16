 Approach 1:-
--------------

class Solution{
public:
    int findMin(int arr[], int n){
       int ans = INT_MAX;
        int start =0;
        int end = n-1;
        
        if(arr[start]<=arr[end]){
            return arr[start];
        }
            
            while(start<=end){
                int mid = start+(end-start)/2;
            
                if(arr[start]<=arr[mid]){
                    ans = min(ans,arr[start]);
                    start = mid+1;
                }else{
                    ans = min(arr[mid],ans);
                    end = mid-1;
                }
                
            }
        return ans;
        }
    
};