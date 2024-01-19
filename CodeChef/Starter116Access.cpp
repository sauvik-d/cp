#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	int x, n;
	while(t--){
		cin>>n;
		cin>>x;
		string str;
		cin>>str;
		int swipe = 0;
		int flag = 0;
		for(int i=0;i<n;i++){
			if(str[i] == '0' && swipe != 0){
				swipe--;
			}
			else if(str[i] == '1'){
				swipe = x;
			}
			else{
				flag = 1;
				break;
			}
		}
		if(flag == 1){
			cout<<"NO\n";
		}
		else{
			cout<<"YES\n";
		}
	}
}