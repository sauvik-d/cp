#include<bits/stdc++.h>
using namespace std;
void solve(){
	string str1, str2, str3; cin>>str1>>str2>>str3;
	string res = "";
	res += str1[0];
	res += str2[0];
	res += str3[0];
	cout<<res<<endl;
}
int main(){
	int t; cin>>t;
	while(t--){
		solve();
	}
	return 0;
}