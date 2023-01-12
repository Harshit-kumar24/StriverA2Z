class Solution{
    public:
    int searchInsertK(vector<int>Arr, int N, int k)
    {
        int ans =0;
        int start =0;
        int end = N-1;
        
        if(k<Arr[0]) return 0;
        
        while(start<=end){
            
            int mid = start+(end-start)/2;
            
            if(Arr[mid]==k){
                return mid;
            }
            else if(Arr[mid]<k){
                ans = mid;
                start =mid+1;
            }else{
                end = mid-1;
            }
        }
        return ans+1;
    }
};