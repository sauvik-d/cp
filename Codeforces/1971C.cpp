#include<bits/stdc++.h>
#include<map>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a, b, c, d;
		cin>>a>>b>>c>>d;
		map<int, char> mp;
		mp[a] = '0';
		mp[b] = '0';
		mp[c] = '1';
		mp[d] = '1';
		string str = "";
		for(int i=1; i<=12;i++){
			if(mp.count(i) != 0){
				str += mp[i];
			}
		}
		if(str == "1010" || str == "0101"){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}