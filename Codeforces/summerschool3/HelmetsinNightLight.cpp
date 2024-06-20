#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int n; cin>>n;
		long long int p; cin>>p;
		vector<pair<long long int, long long int>> v1(n);
		for(auto &i: v1){
			cin>>i.second;
		}
		for(auto &i: v1){
			cin>>i.first;
		}
		long long int ans = p;
		sort(v1.begin(), v1.end());
		n--;
		for(auto i: v1){
			if(n <= 0 || i.first > p){
				break;
			}
			ans += (i.first * min(i.second, n));
			n -= min(i.second, n);
		}
		if(n){
			ans += (n*p);
		}
		cout<<ans<<endl;
	}
}