#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	int n, f, k;
	while(t--){
		cin>>n>>f>>k;
		int arr[n];
		int a;
		for(int i=0;i<n;i++){
			cin>>a;
			arr[i] = a;
		}
		int fav = arr[f-1];
		if(k == n){
			cout<<"YES"<<endl;
			continue;
		}
		sort(arr, arr + n, greater<int>());
		if(arr[k-1] == fav && arr[k] == fav){
			cout<<"MAYBE"<<endl;
			continue;
		}
		int flag = 0;
		for(int i=0;i<k;i++){
			if(arr[i] == fav){
				flag = 1;
			}
		}
		if(flag == 1){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}