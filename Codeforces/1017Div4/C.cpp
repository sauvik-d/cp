#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n; cin>>n;
	int arr[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			int a; cin >>a;
			arr[i][j] = a;
		}
	}
	vector<int> p(2*n, 0);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			p[i+j+1] = arr[i][j];
		}
	}
	set<int> all;
	for(int i=1;i<=2*n;i++){
		all.insert(i);
	}
	for(int i=1;i<2*n;i++){
		all.erase(p[i]);
	}
	p[0] = *all.begin();
	for(int i=0;i<2*n;i++){
		cout<<p[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int t; cin>>t;
	while(t--){
		solve();
	}
}