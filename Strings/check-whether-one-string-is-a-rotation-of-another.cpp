 Approach 1:-
--------------

class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()) return false;

        string check = goal+goal;
        for(int i =0;i<check.size();i++){
            if(check.substr(i,s.size())==s) return true;
        }
        return false;
    }
};

