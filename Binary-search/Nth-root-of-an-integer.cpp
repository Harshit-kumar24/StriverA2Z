 Approach 1:-
---------------
   
class Solution{
	public:
	int NthRoot(int n, int m)
	{
	    
	   int start =0;
	   int end = m;
	   while(start<=end){
	       int mid = start+(end-start)/2;
	       
	       if(pow(mid,n)==m){
	          return mid;
	       }else if(pow(mid,n)>m){
	           end = mid-1;
	       }else{
	           start = mid+1;
	       }
	   }
	    return -1;
	}  
};
