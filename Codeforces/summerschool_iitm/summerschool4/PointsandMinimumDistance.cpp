#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		vector<int> v1(2*n);
		for(int i=0;i<2*n;i++) cin>>v1[i];
		sort(v1.begin(), v1.end());
		int x = 0; int y = 0;
		for(int i=1;i<n;i++){
			x += v1[i-1]-v1[i];
		}
		for(int i=n+1;i<2*n;i++){
			y += v1[i-1]-v1[i];
		}
		cout<<abs(x+y)<<endl;
		for(int i=0;i<n;i++){
			cout<<v1[i]<<" "<<v1[i+n]<<endl;
		}
	}
	return 0;
}