#include<bits/stdc++.h>
using namespace std;
void sort(vector<int> arr, int n){
	int min;
	for(int i=0;i<n-1;i++){
		min = i;
		for(int j=i+1;j<n;j++){
			if(arr[j] < arr[min]){
				min = j;
			}
		}
		int temp = arr[min];
		arr[min] = arr[i];
		arr[i] = temp;
	}
}
int main(){
	int t;
	int n,m;
	cin>>t;
	while(t--){
		cin>>n;
		cin>>m;
		int a[n];
		vector<int> b[m];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<m;i++){
			cin>>b[i];
		}
		for(int i=0;i<b.size();i++){
			sort(a, b[i]);
		}
		for(int i=0;i<n;i++){
			printf("%d ", a[i]);
		}
		printf("\n");
	}
}