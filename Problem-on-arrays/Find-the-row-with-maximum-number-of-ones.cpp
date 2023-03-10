 Approach 1:-
--------------

class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    int ans =0;
	    int msum =0;
	    for(int i =0;i<n;i++){
	        int sum =0;
	        for(int j =0;j<m;j++){
	            sum+=arr[i][j];
	        }
	        if(sum>msum){
	            msum = sum;
	            ans= i;
	        }
	    }
	    if(msum==0) return -1;
	    return ans;
	}

};

 Approach 2:-
--------------

class Solution{
public:

	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    int row =0,col =m-1,ans =-1;
	    
	    while(row<n && col>=0){
	        
	        if(arr[row][col]==1){
	            ans = row;
	            col--;     
	        }
	        else{
	            row++;
	        }
	    }
	    return ans;
	}   

};
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
