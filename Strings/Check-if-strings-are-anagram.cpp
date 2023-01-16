 Approach 1:-
---------------

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t) return true;
        else return false;
    }
};

 Approach 2:-
---------------

class Solution
{
    public:
    bool isAnagram(string a, string b){
        
        vector<int> v1(26,-1),v2(26,-1);
        if(a.size()!=b.size()) return false;
        
        for(int i =0;i<a.size();i++){
            v1[a[i]-'a']++;
            v2[b[i]-'a']++;
        }
        for(int i =0;i<26;i++){
            if(v1[i]!=v2[i]){
                return false;
            }
        }
        return true;
        
    }

};

 Approach 3:-
---------------

class Solution
{
    public:
    bool isAnagram(string a, string b){
        
        if(a.size()!=b.size()) return false;
        
       unordered_map<char,int> m;
       for(char it: a){
           m[it]++;
       }
       
       for(int i =0;i<b.size();i++){
           if(m.find(b[i])!=m.end()){
               m[b[i]]--;
           }
       }
       for(auto it: m){
           if(it.second!=0){
               return false;
           }
       }
        return true;
    }

};