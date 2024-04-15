#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	int n, m, k;
	while(t--){
		cin>>n>>m>>k;
		int arr1[n];
		int arr2[m];
		int count = 0;
		for(int i=0;i<n;i++){
			cin>>arr1[i];
		}
		for(int j=0;j<m;j++){
			cin>>arr2[j];
		}
		if(n>=m){
			for(int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					if(arr1[i] + arr2[j] <= k){
						count++;
					}
				}
			}
		}
		else{
			for(int i=0;i<m;i++){
				for(int j=0;j<n;j++){
					if(arr1[i] + arr2[j] <= k){
						count++;
					}
				}
			}
		}
		cout<<count<<"\n";
	}
	return 0;
}