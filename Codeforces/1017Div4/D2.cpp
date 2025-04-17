#include<bits/stdc++.h>
using namespace std;
#define FOR(a, b) for(int a=0;a<b;a++);
vector<pair<int, char>> countOcc(string s) {
 
    int cnt = 1;
    vector<pair<int, char>> arr;
    for(int i=1; i<s.size(); i++) {
        if(s[i] == s[i - 1]) cnt++;
        else {
            arr.push_back({cnt, s[i - 1]});
            cnt = 1;
        }
    }
    arr.push_back({cnt, s[s.size() - 1]});
    return arr;
}
void solve(){
	string p, s;
    cin >> p >> s;
 
    bool flag = true;
    vector<pair<int, char>> pr = countOcc(p), sr = countOcc(s);
 
    if(pr.size() == sr.size()) {
        for(int i=0; i<sr.size(); i++) {
            if(pr[i].second == sr[i].second && sr[i].first >= pr[i].first && sr[i].first <= 2*pr[i].first) continue;
            else flag = false;
        }
    }
    else flag = false;
 
    cout << (flag ? "YES\n" : "NO\n");
    return;
}
int main(){
	int t; cin>>t;
	while(t--) solve();
	return 0;
}