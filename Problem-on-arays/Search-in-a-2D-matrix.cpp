 Approach 1:-
--------------
   
 class Solution{
public:	
	int matSearch (vector <vector <int>> &mat, int N, int M, int X)
	{
	    
	    for(int i =0;i<N;i++){
	        for(int j =0;j<M;j++){
	            if(mat[i][j]==X){
	                return 1;
	            }
	        }
	    }
	    return 0;
	}
};

 Approach 2:-
--------------
   
class Solution{
public:	
	int matSearch (vector <vector <int>> &mat, int N, int M, int X)
	{
	    int i =0;
	    
	    while(i<N){
	        if(X>=mat[i][0] && X<=mat[i][M-1]){
	            for(int j = 0;j<M;j++){
	                if(mat[i][j]==X) return 1;
	            }
	        }
	        i++;
	    }
	    return 0;
	    
	}
};
