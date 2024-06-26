#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	vector<int> arr(2*n);
	for(int i=0;i<arr.size();i++) cin>>arr[i];
	int freq[n+1];
	for(int i=0;i<n+1;i++) freq[i] = 0;
	int count = 0;
	int mx = 0;
	for(int i=0;i<arr.size();i++){
		freq[arr[i]]++;
		if(freq[arr[i]] % 2 != 0){
			//cout<<"HEHE"<<endl;
			count++;
			mx = max(count, mx);
		}
		else{
			count = count - 1;
			mx = max(count, mx);
		}
		//cout<<"Tracking value: "<<mx<<endl;
	}
	cout<<mx<<endl;
	return 0;
}