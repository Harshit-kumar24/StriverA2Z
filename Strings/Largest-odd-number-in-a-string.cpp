 Approach 1:-
---------------

class Solution {
  public:
    string maxOdd(string s) {
        string ans;
        int ind =-1;
        for(int i =s.size()-1;i>=0;i--){
            if(s[i]=='1' || s[i]=='3' || s[i]=='5' || s[i]=='7' || s[i]=='9'){
                ind  =i;
                break;
            }
        }
        if(ind==-1) return ans;
        
        for(int i =0;i<=ind;i++){
            ans+=s[i];
        }
        return ans;
    }
};

 Approach 2:-
---------------

class Solution {
  public:
    string maxOdd(string s) {
        string ans;
        int ind =-1;
        for(int i =s.size()-1;i>=0;i--){
            int x = s[i]-'0';
            if(x%2!=0){
                ind  =i;
                break;
            }
        }
        if(ind==-1) return ans;
        
        for(int i =0;i<=ind;i++){
            ans+=s[i];
        }
        return ans;
    }
};