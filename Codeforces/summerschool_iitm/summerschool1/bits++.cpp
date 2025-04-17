#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	string str;
	int value = 0;
	while(t--){
		cin>>str;
		for(int i=0;i<str.size()-1;i++){
			if(str[i] == '-' && str[i+1] == '-'){
				value--;
			}
			else if(str[i] == '+' && str[i+1] == '+'){
				value++;
			}
		}
	}
	cout<<value<<endl;
	return 0;
}