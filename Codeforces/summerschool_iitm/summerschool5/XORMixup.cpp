#include<bits/stdc++.h>
using namespace std;
bool isEqual(vector<int> v1){
	for(int i=0;i<v1.size()-1;i++){
		if(v1[i] != v1[i+1]){
			return false;
		}
	}
	return true;
}
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		vector<int> v1(n);
		for(int i=0;i<n;i++) cin>>v1[i];
		if(isEqual(v1)){
			cout<<v1[0]<<endl;
			continue;
		}
		for(int i=0;i<n;i++){
			int xor_value = 0;
			for(int j=0;j<n;j++){
				if(i == j) continue;
				xor_value = (xor_value ^ v1[i]);
			}
			if(xor_value == v1[i]){
				cout<<v1[i]<<endl;
				break;
			}
			//cout<<xor_value<<endl;
		}
	}
	return 0;
}