#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		long long int n; cin>>n;
		vector<long long int> v1(n);
		vector<long long int> v2(n);
		for(long long int i=0;i<n;i++){
			cin>>v1[i];
			cin>>v2[i];
		}
		bool check = true;
		int weight = v1[0];
		int origin_strength = v2[0];
		for(long long int i=1;i<n;i++){
			if(v1[i] < weight){
				continue;
			}
			else if(v2[i] >= origin_strength){
				check = false;
			}
		}
		if(check == true){
			cout<<weight<<endl;
		}
		else{
			cout<<-1<<endl;
		}
	}
}