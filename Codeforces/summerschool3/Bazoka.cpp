#include<bits/stdc++.h>
using namespace std;
bool isSame(vector<int> v1, vector<int> v2){
	for(int i=0;i<v1.size();i++){
		if(v1[i] != v2[i]){
			return false;
		}
	}
	return true;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n; cin>>n;
		vector<int> v1, v2;
		int a;
		for(int i=0;i<n;i++){
			cin>>a;
			v1.push_back(a);
			v2.push_back(a);
		}
		sort(v2.begin(), v2.end());
		int t = 1;
		while(isSame(v1, v2) != true){
			int temp = v1[0];
			auto it = v1.begin();
			v1.erase(it); v1.push_back(temp);
			t++;
			if(t == v2.size()){
				break;
			};
		}
		if(isSame(v1, v2) == true){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
	}
	return 0;
}