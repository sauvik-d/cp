#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n; cin>>n;
		vector<int> v1(n);
		for(int i=0;i<n;i++) cin>>v1[i];
		int sum = 0;
		int count = 0;
		int flag = 0;
		for(int i=0;i<n;i++){
			sum += v1[i];
			for(int j=0;j<=i;j++){
				if(sum - v1[j] == v1[j]){
					flag = 1;
				}
			}
			if(flag == 1){
				count++; flag = 0;
			}
		}
		cout<<"Ouput: "<<count<<endl;
	}
	return 0;
}