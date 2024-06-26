#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int x1, y1; cin>>x1>>y1;
		int x2, y2; cin>>x2>>y2;
		if(x1 > y1){
			if(x2 < y2){
				cout<<"NO"<<endl;
				continue;
			}
		}
		else{
			if(x2 > y2){
				cout<<"NO"<<endl;
				continue;
			}
		}
		cout<<"YES"<<endl;
	}
	return 0;
}