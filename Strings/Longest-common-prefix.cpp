 Approach 1:-
--------------

class Solution {
public:
    string longestCommonPrefix(vector<string>& arr) {
        int N = arr.size();

        if(N==1) return arr[0];

       string ans = arr[0];
        string check = arr[0];
        
        bool a = false;
        int i =1;
        while(i<N){
        string word = "";
            for(int j = 0;j<check.size();j++){
                if(arr[i][j]==check[j]){
                    word+=check[j];
                }else{
                    break;
                }
            }
            if(word.size()<=ans.size()){
                ans = word;
                a = true;
            }
            i++;
        }
        if(a==false) return "";
        return ans;
    }
};

 Approach 2:-
---------------

class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        int ans = s[0].length(), n = s.size();
        for(int i=1; i<n; i++){
            int j = 0;
            while(j<s[i].length() && s[i][j]==s[0][j])j++;
            ans = min(ans, j);
        }
        return s[0].substr(0, ans);
    }
};

 Approach 3:-
---------------

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int n)
    {
        sort(arr,arr+n);
        string a="";
        for(int i=0;i<arr[0].size();i++)
        {
            if(arr[0][i]==arr[n-1][i])
            {
                a+=arr[0][i];
            }
            else
            {
                break;
            }
        }
        if(a.size()>0) return a;
        return "-1";
    }
};