#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	string str;
	while(t--){
		cin>>str;
		if(str.size()%2 != 0){
			cout<<"NO"<<endl;
			continue;
		}
		else{
			int flag = 0;
			int k = str.size()/2;
			for(int i=0;i<k;i++){
				if(str[i] != str[k+i]){
					//cout<<"NO"<<endl;
					flag = 1;
					break;
				}
			}
			if(flag == 1){
				cout<<"NO"<<endl;
				continue;
			}
			cout<<"YES"<<endl;
		}
	}
}