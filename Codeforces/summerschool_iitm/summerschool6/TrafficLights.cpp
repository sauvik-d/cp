#include<bits/stdc++.h>
using namespace std;
int main(){
	int a; cin>>a;
	int b; cin>>b;
	int time = 0;
	for(int i=1;i<=a*b;i++){
		if(i % a == 0 && i % b == 0){
			time = i;
			break;
		}
	}
	cout<<time<<endl;
	return 0;
}