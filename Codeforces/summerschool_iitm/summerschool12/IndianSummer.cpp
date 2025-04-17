#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	string a, b, c;
	set<string> s;
	while(t--){
		cin>>a>>b;
		c = b+a;
		s.insert(c);
	}
	cout<<s.size()<<endl;
	return 0;
}