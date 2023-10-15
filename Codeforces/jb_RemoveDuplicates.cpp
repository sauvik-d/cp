#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(auto &e : arr) cin >> e;

    map<int, int> mp;
    for(int i=0; i<n; i++) mp[arr[i]] = i;

    vector<int> res(n, 0);
    for(auto e : mp){
        res[e.second] = e.first;
    }
    int count = 0;
    for(auto e : res){
        if(e != 0) count++;
    }
    cout<<count<<"\n";
    for(auto e : res){
        if(e != 0) cout << e << " ";
    }
    
}