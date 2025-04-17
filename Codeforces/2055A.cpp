#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n, a, b; cin>>n>>a>>b;
	if(abs(b-a) == 1){
		cout<<"NO"<<endl;
		return;
	}
	else{
		cout<<"YES"<<endl;
	}
}
int main(){
	int t; cin>>t;
	while(t--) solve();
	return 0;
}