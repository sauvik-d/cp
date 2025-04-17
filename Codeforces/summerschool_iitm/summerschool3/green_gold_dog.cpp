#include<bits/stdc++.h>
using namespace std;
bool check(pair<int, int> x, pair<int, int> y){
	return x.second < y.second;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n; cin>>n;
		vector<pair<int, int>> v1(n);
		for(int i=0;i<n;i++){
			cin>>v1[i].first;
			v1[i].second = i;
		}
		sort(v1.rbegin(), v1.rend());
		for(int i=0;i<n;i++){
			v1[i].first = i+1;
		}
		sort(v1.begin(), v1.end(), check);
		for(auto i: v1){
			cout<<i.first<<" ";
		}
		cout<<endl;
	}
}