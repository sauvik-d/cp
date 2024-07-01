#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++) cin>>arr[i];
	int sum = 0;
	sort(arr.begin(), arr.end());
	for(int i=0;i<n;i++) sum += abs(arr[i] - arr[0]);
	cout<<sum<<endl;
	return 0;
}