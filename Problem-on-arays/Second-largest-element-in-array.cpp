 Approach -1:-
---------------  
class Solution{
public:	

	int print2largest(int arr[], int n) {
	    
	    int ma = INT_MIN;
	    int ma2 = INT_MIN;
	    
	    for(int i =0;i<n;i++){
	        if(arr[i]>ma){
	            ma = arr[i];
	        }
	    }
	    for(int i =0;i<n;i++){
	        if(arr[i]<ma && arr[i]>ma2){
	            ma2 = arr[i];
	        }
	    }
	    if(ma2==INT_MIN) return -1;
	    
	    return ma2;
	
	}
};


 Approach 2:-
-------------

class Solution{
public:	

	int print2largest(int arr[], int n) {
	
	  int ma = INT_MIN, ma2 = INT_MIN;
	  
	  if(n==0 || n==1) return -1;
	  
	  for(int i =0;i<n;i++){
	      if(arr[i]>ma){
	          ma2 = ma;
	          ma = arr[i];
	      }
	      
	      if(arr[i]>ma2 && arr[i] != ma){
	          ma2 = arr[i];
	      }
	  }
	  if(ma2==INT_MIN) return -1;
	  
	  return ma2;
	}
};
