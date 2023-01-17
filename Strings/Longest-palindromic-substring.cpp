 Approach 1:-
--------------

class Solution {
  public:
  bool palin(string s){
      int start =0;
      int end =s.size()-1;
      while(start<end){
          if(s[start]!=s[end]) return false;
          start++;
          end--;
      }
      return true;
  }
  
    string longestPalin (string S) {
        string ans = "";
        
        for(int i =0;i<S.size();i++){
            string temp = "";
            for(int j =i;j<S.size();j++){
                temp+=S[j];
                if(palin(temp)){
                    if(temp.size()>ans.size()){
                        ans = temp;
                    }
                }
            }
        }
        return ans;
        
    }
};