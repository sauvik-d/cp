#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    int n;
    while(t--){
        cin>>n;
        char arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int win = 0;
        int flag = 1;
        for(int i=0;i<n;i++){
            if(arr[i] == arr[i+1]){
                win++;
                i++;
            }
        }
        cout<<n-win<<endl;
    }
    return 0;
}
