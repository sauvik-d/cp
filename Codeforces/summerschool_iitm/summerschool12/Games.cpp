#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	vector<int> arr1(n), arr2(n);
	for(int i=0;i<n;i++){
		cin>>arr1[i];
		cin>>arr2[i];
	}
	int count = 0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(arr1[i] == arr2[j]){
				count++;
			}
		}
	}
	cout<<count<<endl;
	return 0;
}