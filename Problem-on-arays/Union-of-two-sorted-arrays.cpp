 Approach 1:-
--------------

vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
       vector<int> ans;
        map<int,int> ma;
       
       for(int i =0;i<n;i++){
           ma[arr1[i]]++;
       }
       for(int j =0;j<m;j++){
           ma[arr2[j]]++;
       }
       for(auto it: ma){
           ans.push_back(it.first);
       }
       return ans;
    }
};

 Approach 2:-
--------------

vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
       vector<int> ans;
       set<int> s;
       
       for(int i =0;i<n;i++){
           s.insert(arr1[i]);
       }
       for(int j =0;j<m;j++){
           s.insert(arr2[j]);
       }
       for(auto it: s){
           ans.push_back(it);
       }
       return ans;
    }
};

 Approach 3:-
---------------
   
  vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
       vector<int> ans;
      
      int i =0;
      int j =0;
      
      while(i<n && j<m){
         
          if(arr1[i]<arr2[j]){
              if(ans.size()==0 || ans.back()!=arr1[i]){
                  ans.push_back(arr1[i]);
                  i++;
              }
            }else{
              if(ans.size()==0 || ans.back()!= arr2[j]){
                  ans.push_back(arr2[j]);
                  j++;
              }
          }
      }
      while(i<n){
          if(arr1[i]==ans.back()){
              i++;
          }else{
              ans.push_back(arr1[i]);
          }
      }
        while(j<m){
          if(arr2[j]==ans.back()){
              j++;
          }else{
              ans.push_back(arr2[j]);
          }
        }
      return ans;
    }
};







