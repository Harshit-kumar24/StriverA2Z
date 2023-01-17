 Approach 1:-
---------------

#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,int>& a,pair<int,int>& b){
    if(a.second==b.second){
        return (a.first<b.first);
    }
    return (a.second>b.second);
}

void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);

    unordered_map<int,int> m;
    for(int i =0;i<n;i++){
        cin>>arr[i];
        m[arr[i]]++;
     
    }
    vector<pair<int,int>> freq(m.begin(),m.end());
    
    sort(freq.begin(),freq.end(),comp);
    
    for(auto it: freq){
            for(int j =1;j<=it.second;j++){
               cout<<it.first<<" "; 
            }
    }
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }
    return 0;
}