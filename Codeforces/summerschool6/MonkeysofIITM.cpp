#include<bits/stdc++.h>
using namespace std;
int main(){
	int a; cin>>a;
	int b; cin>>b;
	int n; cin>>n;
	if(n%2 == 0){
		int sum = 0;
		sum += (a*(n/2));
		sum -= (b*(n/2));
		cout<<sum<<endl;
	}
	else{
		int sum = 0;
		sum += (a*(ceil(n/2)+1));
		sum -= b*ceil(n/2);
		cout<<sum<<endl;
	}
	return 0;
}