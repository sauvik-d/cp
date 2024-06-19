#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n; cin>>n;
	int intial_arr[n];
	int final_arr[n];
	int a;
	for(int i=0;i<n;i++){
		cin>>a;
		intial_arr[i] = a;
	}
	for(int i=0;i<n;i++){
		cin>>a;
		final_arr[i] = a;
	}
	int m; cin>>m;
	int d[m];
	for(int i=0;i<m;i++){
		cin>>a;
		d[i] = a;
	}
	int mismatch = 0;
	for(int i=0;i<n;i++){
		if(intial_arr[i] != final_arr[i]){
			mismatch++;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}