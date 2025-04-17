#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	vector<int> v1;
	int a;
	for(int i=0;i<t;i++){
		cin>>a;
		v1.push_back(a);
	}
	int flag = 0;
	for(int i=0;i<t;i++){
		if(v1[i] == 1){
			flag = 1;
		}
	}
	if(flag == 1){
		cout<<"HARD"<<endl;
	}
	else{
		cout<<"EASY"<<endl;
	}
	return 0;
}