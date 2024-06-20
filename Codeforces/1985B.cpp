#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	int n;
	while(t--){
		cin>>n;
		int x = 2;
		int k = 1;
		int arr[n] = {0};
		int mx = 0;
		while(x < n){
			if(k*x > n){
				x++;
				mx = 0;
				k = 1;
			}
			int sum = (x*k*(k+1))/2;
			//cout<<sum<<" ";
			mx = max(sum, mx);
			arr[x-1] = mx;
			cout<<arr[x]<<"<-"<<x<<endl;
			k++;
		}
		int mx2 = 0;
		
		for(int i=0;i<n;i++){
			//cout<<arr[i]<<endl;
			if(mx2 < arr[i]){
				mx2 = max(arr[i], mx2);
			}	
		}
		cout<<mx2<<endl;
		int index = 0;
		for(int i=0;i<n;i++){
			if(arr[i] == mx2){
				index = i;
				break;
			}
		}
		cout<<index+1<<endl;
		//cout<<mx<<endl;
		//cout<<i<<endl;
	}
	return 0;
}