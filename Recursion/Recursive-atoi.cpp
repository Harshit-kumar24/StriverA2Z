 Approach 1:-
--------------
   
class Solution{
  public:
    int atoi(string str) {
        
        int r =0,i =str.size()-1;
        int ans =0,con =0;
        
        if(str[0]=='-') con++;
        while(i>=con){
            int num = int(str[i]-'0');
            if(num<0 || num>9) return -1;
            ans+=num*pow(10,r);
            i--;
            r++;
        }
        if(str[0]=='-') ans = ans*(-1);
        return ans;
    }
};

 Approach 2:-
--------------
   
