 Approach 1:-
---------------

class Solution{
public:	
	int matSearch (vector <vector <int>> &mat, int N, int M, int X)
	{
	    int i =0;
	    
	    while(i<N){
	        if(X>=mat[i][0] && X<=mat[i][M-1]){
	            int start =0;
	            int end = M-1;
	            
	            while(start<=end){
	                int mid  = start+(end-start)/2;
	                
	                if(mat[i][mid]==X) return 1;
	                else if(mat[i][mid]<X) start = mid+1;
	                else end = mid-1;
	            }
	        }
	        i++;
	    }
	    return 0;
	    
	}
};