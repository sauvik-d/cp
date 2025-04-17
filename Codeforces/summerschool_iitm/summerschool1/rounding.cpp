#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	int last = t % 10;
	if(last <= 5){
		t -= last;
		cout<<t<<endl;
	}
	else{
		t += (10-last);
		cout<<t<<endl;
	}
	return 0;
}