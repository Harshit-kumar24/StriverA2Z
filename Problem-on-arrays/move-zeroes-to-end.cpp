 Approach 1:-
--------------
 class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    
	    vector<int> v;
	    
	    for(int i =0;i<n;i++){
	        if(arr[i]!=0){
	            v.push_back(arr[i]);    
	        
	        }
	    }
	    
	    int zcount = n-v.size();
	    
	    for(int i =0;i<v.size();i++){
	        arr[i] = v[i];
	    }
	    for(int i = n-1;i>=n-zcount;i--){
	        arr[i] =0;
	    }
	  
	}
};

 Approach 2:-
--------------

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       int j =-1;
        int n = nums.size();
        if(n==1) return;
       for(int i = 0;i<n;i++){
           if(nums[i]==0){
               j = i;
               break;
           }
       }
       if(j==-1) return;
       int k = j+1;
       while(k<n){
            if(nums[k]!=0 && nums[j]==0){
                swap(nums[j],nums[k]);
                j++;
                k++;
            }else if(nums[k]==0){
                k++;
            }
       }
    
    }
};
