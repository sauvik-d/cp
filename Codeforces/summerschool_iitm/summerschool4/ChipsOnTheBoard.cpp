#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		long long int n; cin>>n;
		vector<long long int> v1(n); vector<long long int> v2(n);
		for(long long int i=0;i<n;i++) cin>>v1[i];
		for(long long int i=0;i<n;i++) cin>>v2[i];
		sort(v1.begin(), v1.end());
		sort(v2.begin(), v2.end());
		long long int x = 0; long long int y = 0;
		for(long long int i=0;i<n;i++) x += v1[i]+v2[0];
		for(long long int i=0;i<n;i++) y += v2[i]+v1[0];
		cout<<min(x, y)<<endl;
	}
	return 0;
}