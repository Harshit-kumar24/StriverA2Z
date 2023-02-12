 Approach 1:-
--------------
   
class Solution{
	public:
    
    void f(string s,string str,int ind,vector<string>& ans){
        
        if(ind==s.size()){
            if(str!="") ans.push_back(str);
            return;
        }
        
        //picking
        str =str+s[ind];
        f(s,str,ind+1,ans);
        
        //not-picking
        str.pop_back();
        f(s,str,ind+1,ans);
    }

		vector<string> AllPossibleStrings(string s){
		    vector<string> ans;
		    string str = "";
		    f(s,str,0,ans);
		    sort(ans.begin(),ans.end());
		    return ans;
		}
};
