class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    int start =0;
	    int end = n-1;
	    
	    if(arr[start]<=arr[end]){
	        return start;
	    }
	    
	    while(start<=end){
	        int mid = start+(end-start)/2;
	        
	        if(arr[mid]>arr[mid+1]){
	            return mid+1;
	        }
	        else if(arr[mid]<arr[mid+1] && arr[mid]<arr[mid-1]){
	            return mid;
	        }
	        if(arr[start]<arr[mid]){
	            start = mid+1;
	        }else{
	            end = mid-1;
	        }
	    }
	    return 0;
	}

};