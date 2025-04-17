#include<bits/stdc++.h>
using namespace std;
int main(){
	int x, y;
	cin>>x>>y;
	if(x>=y){
		x -= y;
		x = x/2;
		cout<<y<<" "<<x<<endl;
	}
	else{
		y -= x;
		y = y/2;
		cout<<x<<" "<<y<<endl;
	}
	return 0;
}