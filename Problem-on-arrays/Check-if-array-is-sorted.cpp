class Solution {
  public:
    bool arraySortedOrNot(int arr[], int n) {
        
        if(n==0 || n==1) return true;
        
        for(int i =0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                return false;
            }
        }
        return true;
    }
};
