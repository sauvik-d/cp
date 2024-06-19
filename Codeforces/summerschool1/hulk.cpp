#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	string str = "";
	for(int i=1;i<=t;i++){
		if(i%2==1){
			str += "I hate ";
		}
		else{
			str += "I love ";
		}
		if(i != t){
			str += "that ";
		}
	}
	str += "it";
	cout<<str<<endl;
}