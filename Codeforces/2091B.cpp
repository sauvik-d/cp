#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n, x; cin>>n>>x;
		vector<int> v1(n);
		for(int i=0;i<n;i++) cin>>v1[i];
		sort(v1.begin(), v1.end());
		reverse(v1.begin(), v1.end());
		int res = 0;
		for(int i=0, count = 1;i<n;i++, count++){
			if(v1[i]*count >= x){
				res++;
				count = 0;
			}
		}
		cout<<res<<endl;
	}
	return 0;
}