#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		string str; cin>>str;
		vector<bool> found(26);
		string ans = "YES";
		for(int i=0;i<n;i++){
			if(found[str[i]-'A']){
				if(i-1 >= 0 && str[i-1] != str[i]){
					ans = "NO";
					break;
				}
			}
			else{
				found[str[i]-'A'] = true;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}