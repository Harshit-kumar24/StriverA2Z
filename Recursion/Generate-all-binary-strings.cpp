 Approach 1:-
--------------
   
class Solution{
public:
    void f(string str,int num,int ind){
        if(ind==num){
            cout<<str<<" ";
            return;
        }
        if(ind!=0 && str[ind-1]=='1'){
            f(str+'0',num,ind+1);
        }
        else{
            f(str+'0',num,ind+1);
            f(str+'1',num,ind+1);
        }
    }

    void generateBinaryStrings(int& num){
        f("",num,0);
        return;
    }
};
