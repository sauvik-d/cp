#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		vector<int> v1(3);
		for(int i=0;i<3;i++) cin>>v1[i];
		int minimum = 100;
		for(int i=0;i<3;i++){
			int sum = 0;
			for(int j=0;j<3;j++){
				sum += abs(v1[j]-v1[i]);
			}
			//cout<<sum<<endl;
			minimum = min(sum, minimum);
		}
		cout<<minimum<<endl;
	}
	return 0;
}