 Approach-1
------------

class Solution{
public:	
	
	int count(int arr[], int n, int x) {
	  
   
    int start = 0;
    int end = n-1;
    int ans1 = -1;
    while(start<=end){
        int mid =start+(end-start)/2;
        
        if(arr[mid]==x){
            ans1 = mid;
            end = mid-1;
        }
        else if(arr[mid]>x){
            end = mid-1;
        }else{
            start = mid+1;
        }
    }
        // part-2
        
    start = 0;
    end = n-1;
    int ans2 = -1;
    while(start<=end){
        int mid =start+(end-start)/2;
        
        if(arr[mid]==x){
            ans2 = mid;
            start = mid+1;
        }
        else if(arr[mid]>x){
            end = mid-1;
        }else{
            start = mid+1;
        }
        
    }
    if(ans1!=-1 && ans2!=-1){
        int ans = ans2-ans1+1;
    return ans;
    }
    return 0;
	}
};