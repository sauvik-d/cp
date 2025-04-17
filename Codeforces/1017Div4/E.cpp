#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n; cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int count = 0;
	for(int i=0;i<n;i++){
		int res = 0;
		for(int j=0;j<n;j++){
			res += (arr[j] ^ arr[i]);
		}
		count = max(res, count);
	}
	cout<<count<<endl;
}
int main(){
	int t; cin>>t;
	while(t--){
		solve();
	}
}