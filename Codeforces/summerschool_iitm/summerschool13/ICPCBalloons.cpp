#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		string str; cin>>str;
		vector<int> v1(26, 0);
		int ans = 0;
		for(auto x: str){
			if(v1[x-'A'] == 0){
				ans++;
			}
			v1[x-'A']++;
			ans++;
		}
		cout<<ans<<endl;
	}
	return 0;	
}