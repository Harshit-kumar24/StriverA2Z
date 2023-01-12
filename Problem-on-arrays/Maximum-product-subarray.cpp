 Approach 1:-
--------------

class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	       if(n==1) return arr[0];
	       
	       long long ans = INT_MIN;
	       for(int i =0;i<n;i++){
	           for(int j =i;j<n;j++){
	               long long p = 1;
	               for(int k = i;k<=j;k++){
	                   p*=arr[k];
	                   ans = max(ans,p);
	               }
	           }
	       }
	       return ans;
	}
};


 Approach 2:-
---------------

class Solution{
public:

	long long maxProduct(vector<int> arr, int n) {
	   long long ans = INT_MIN;
	   
	   for(int i =0;i<n;i++){
	       long long p = 1;
	       for(int j = i;j<n;j++){
	           p*=arr[j];
	           ans = max(ans,p);
	       }
	   }
	   return ans;
	}
};

 Approach 3:-
--------------

