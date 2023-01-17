 Approach 1:-
---------------

class Solution{
    public:

        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            int i = n-1;
            int j = 0;
            
            while(i>=0 && j<m){
                if(arr2[j]<arr1[i]){
                    swap(arr2[j],arr1[i]);
                }
                i--;
                j++;
            }
            sort(arr1,arr1+n);
            sort(arr2,arr2+m);
        } 
};