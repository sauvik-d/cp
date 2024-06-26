#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		vector<int> a(n), b(n);
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++) cin>>b[i];
		int mx1 = 0;
		int mx2 = 0;
		for(int i=0;i<n;i++){
			mx1 = max(a[i], mx1);
		}
		for(int i=0;i<n;i++){
			mx2 = max(b[i], mx2);
		}
		if(a[n-1] != mx1 && a[n-1] != mx2){
			cout<<"NO"<<endl;
			continue;
		}
		for(int i=0;i<n;i++){
			if(a[i] > b[i]){
				swap(a[i], b[i]);
			}
		}
		bool ok = true;
		for(int i=0;i<n-1;i++){
			if(a[i] > a[n-1]){
				ok = false;
				break;
			}
		}
		if(ok){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}