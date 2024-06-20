#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	vector<int> v1;
	int a;
	for(int i=0;i<t;i++){
		cin>>a;
		v1.push_back(a);
	}
	sort(v1.begin(), v1.end());
	for(int i=0;i<t;i++){
		cout<<v1[i]<<" ";
	}
	return 0;
}