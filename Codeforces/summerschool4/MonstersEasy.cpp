#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		long long int n; cin>>n;
		long long int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        long long int x=0,count1=0,count2=0;
        while(x<n)
        {
            if((arr[x]-count2)-1>0)
            {
                count1+=((arr[x]-count2)-1);
                count2++;
            }
            else if((arr[x]-count2)-1==0)
            {
                count2++;
            }
            x++;
        }
 
        cout<<count1<<endl;
	}
	return 0;
}