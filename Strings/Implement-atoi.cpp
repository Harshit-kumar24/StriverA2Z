 Appraoch 1:-
--------------

class Solution{
  public:
    int atoi(string str) {
        int ans =0;
        int n = str.size();
        int start =0;
        if(str[start]=='-'){
            start++;
        }
        for(int i =str.size()-1;i>=start;i--){
            if(str[i]>'9' || str[i]<'0') return -1;
            ans+=pow(10,(n-1-i))*int(str[i]-'0');
        }
       if(str[0]=='-') ans = ans*(-1);
        return ans;
    }
};

 Approach 2:-
---------------

