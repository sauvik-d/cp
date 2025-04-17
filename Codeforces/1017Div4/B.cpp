#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n, m; cin>>n>>m;
	int l, r; cin>>l>>r;
	int left = 0, right = 0;
	if(r <= 0){
		left -= m;
	}
	else if(l >= 0){
		right += m;
	}
	else{
		int sema = 0;
		while(m--){
			if(sema % 2 == 0){
				if(left > l){
					left--;
				}
				else{
					right++;
				}
			}
			else{
				if(right < r){
					right++;
				}
				else{
					left--;
				}
			}
			sema++;
		}
	}
	cout<<left<<" "<<right<<endl;
}
int main(){
	int t; cin>>t;
	while(t--) solve();
}