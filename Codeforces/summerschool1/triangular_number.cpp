#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	int flag = 0;
	if(t >= 0){
		int a = 0;
		for(int i=1;a<=t;i++){
			a += i;
			if(a == t){
				flag = 1;
				cout<<"YES"<<endl;
			}
		}
	}
	if(flag == 0){
		cout<<"NO"<<endl;
	}
	return 0;
}