 Approach 1:-
--------------

class Solution
{
  public:
    long long int substrCount (string s, int k) {
        set<char> m;
        int cnt = 0;
        for(int i =0;i<s.size();i++){
            int j = i;
            while(j<s.size()){
                m.insert(s[j]);
                if(m.size()!=0 && int(m.size())==k){
                    cnt++;
                }
             
                j++;
            }
            m.clear();
        }
    	return cnt;
    }
};

 Approach 2:-
--------------

