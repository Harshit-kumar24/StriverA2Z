class Solution
{
  public:
    int findOnce(int arr[], int n) {
        int start =0;
        int end = n-1;
        
        while(start<=end){
            int mid = start+(end-start)/2;
            
            if(arr[mid+1]!=arr[mid] && arr[mid-1]!=arr[mid]){
                return arr[mid];
            }
            if(mid%2==0){
                if(arr[mid+1]!=arr[mid]){
                    end = mid-1;
                }else{
                    start =mid+1;
                }
            }else if(mid%2!=0){
                if(arr[mid-1]!=arr[mid]){
                    end = mid-1;
                }else{
                    start = mid+1;
                }
            }
        }
        return -1;
    }
};