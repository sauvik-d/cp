#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n; cin>>n;
		string str; cin>>str;
		int start = -1;
		for(int i=0;i<n;i++){
			if(str[i] == 'B'){
				start = i;
				break;
			}
		}
		int end = -1;
		for(int i=n-1;i>=0;i--){
			if(str[i] == 'B'){
				end = i;
				break;
			}
		}
		if(start != -1 && end != -1){
			if(start - end == 0){
				cout<<1<<endl;
			}
			else{
				cout<<abs(start - end)+1<<endl;
			}
		}
		else{
			cout<<0<<endl;
		}
	}
	return 0;
}