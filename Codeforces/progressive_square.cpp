#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin>>test;
	int n, c, d;
	cin>>n>>c>>d;
	int arr[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	int flag = 0;
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1;j++){
			if(arr[i][j+1] - arr[i][j] != d && arr[i+1][j] - arr[i][j] != c){
				flag = 1;
				break;
			}
		}

	}
	if(flag == 1){
		cout<<"NO"<<endl;
	}
	else{
		cout<<"YES"<<endl;
	}
	return 0;
}