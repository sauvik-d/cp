#include<bits/stdc++.h>
using namespace std;
int power = 0;
int solve(int x, int y){
	if(x == 1){
		//cout<<"This is 1"<<endl;
		return x;
	}
	else if(x % y != 0) return x;
	solve(x/y, y);
}
int main(){
	int t; cin>>t;
	while(t--){
		int x; cin>>x;
		int y; cin>>y;
		int k; cin>>k;
		while(k--){
			x += 1;
			if(x%y == 0){
				x = solve(x, y);
			}
		}
		cout<<x<<endl;
	}
	return 0;
}