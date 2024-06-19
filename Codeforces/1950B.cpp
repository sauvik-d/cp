#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	int n;
	while(t--){
		cin>>n;
		for (int i = 0; i < 2 * n; i += 1) {
			for (int j = 0; j < 2 * n; j += 1) {
			if ((i / 2 + j / 2) % 2 == 0) {
				cout << "#";
			}
			else {
				cout << ".";
			}
		}
		cout << endl;
		}
}
}
