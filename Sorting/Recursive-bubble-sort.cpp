class Solution{
    public:
    void f(int arr[],int n){
        
        if(n==0) return;
        
        
        for(int i = 0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
        }
        
        f(arr,n-1);
    }
    
    void bubbleSort(int arr[], int n){
        return f(arr,n);
       
    }
};