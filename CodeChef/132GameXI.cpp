#include<bits/stdc++.h>
#include<algorithm>
#include<string.h>
using namespace std;

void solve(){
	int n,m;
	cin>>n>>m;
	int a[n], b[m];
	int ai, bi;
	for(int i=0;i<n;i++){
		cin>>ai;
		a[i] = ai;
	}
	for(int i=0;i<m;i++){
		cin>>bi;
		b[i] = bi;
	}
	sort(a, a+n);
	sort(b, b+m);
	if(n+m == 11){
		int sum = 0;
		for(int i=0;i<n;i++){
			sum += a[i];
		}
		for(int j=0;j<m;j++){
			sum += b[j];
		}
	}
	if(n < 4 || m < 4){
		cout<<-1<<endl;
		return;
	}
	else{
		int finalarr[n+m];
		for(int i=0;i<n;i++){
			finalarr[i] = a[i];
		}
		for(int i=0;i<m;i++){
			finalarr[i+n] = b[i];
		}
	}
	sort(finalarr, finalarr+n+m);
	int total = 0;
	for(int i=n+m;i>=n+m-11;i++){
		total += finalarr[i];
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