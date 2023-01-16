 Approach 1:-
--------------

class Solution {
public:
    string reverseWords(string s) {
        string ans;
        stringstream st(s);
        string word;
        while(st>>word){
            reverse(word.begin(),word.end());
            ans+=word;
            ans+=" ";
        }
        ans.pop_back();
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

 Approach 2:-
---------------

class Solution
{
    public:
    string reverseWords(string S){ 
       S+=" ";
    stack<string> st;
    int i;
    string str="";
    for(i=0;i<S.length();i++)
    {
        if(S[i]==' ')
        {
            st.push(str);
            str="";
        }
        else str+=S[i];
    }
    string ans="";
    while(st.size()!=1)
    {
        ans+=st.top()+" ";
        st.pop();
    }
    ans+=st.top();
    return ans;
                
    } 
};

 Appraoch 3:-
---------------


class Solution
{
    public:
    string reverseWords(string S){ 
    int left = 0;
    int right = s.length()-1;
    
    string temp="";
    string ans="";
    
    while (left <= right) {
        char ch= s[left];
        if (ch != ' ') {
            temp += ch;
        } else if (ch == ' ') {
            if (ans!="") ans = temp + " " + ans;
            else ans = temp;
            temp = "";
        }
        left++;
    }
    
        if (temp!="") {
        if (ans!="") ans = temp + " " + ans;
        else ans = temp;
    }
    
    return ans;    
}
};
