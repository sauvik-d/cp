#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int x; cin>>x;
		int y; cin>>y;
		int mx = max(abs(x), abs(y));
		if(mx <= y){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}