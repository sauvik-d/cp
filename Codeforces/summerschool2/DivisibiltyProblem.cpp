#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main(){
	int t;
	cin>>t;
	int a, b;
	while(t--){
		cin>>a>>b;
		int moves = 0;
		if(a % b == 0){
			cout<<0<<endl;
			continue;
		}
		double k = ceil(a/b);
		moves = (b*(k+1)) - a;
		cout<<moves<<endl;
	}
	return 0;
}