 Approach 1:-
--------------
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size()+1;
        vector<int> freq(n,0);
        for(int i =0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        int ans = -1;
        for(int i =0;i<n;i++){
            if(freq[i]==1){
                ans = i;
                break;
            }
        }
        return ans;
        }
};

 Approach 2:-
--------------
   
class Solution{
public:	
	int search(int A[], int N){
	    int ans = A[0];
	    for(int i =1;i<N;i++){
	        ans = A[i]^ans;
	    }
	    return ans;
	}
};

Approach 3:-
--------------

class Solution{
public:	
int search(int arr[], int N){
	    int l = 0, h = N-1;
	    
	    while(l <= h){
	        
	        int mid = (l+h)/2;
	        
	        if(arr[mid] != arr[mid-1] && arr[mid] != arr[mid+1])
	        
	            return arr[mid];
	        
	        if(mid%2 == 0){
	            if(arr[mid] == arr[mid+1])
	                l = mid+1;
	            else
	                h = mid-1;
	        }
	        else{
	            if(arr[mid] == arr[mid-1])
	                l = mid+1;
	            else
	                h = mid-1;
	        }
	    }
	    
	}
};
 

  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  

