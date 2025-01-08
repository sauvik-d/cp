#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    int n;
    string str;
    while(t--){
        cin>>n;
        cin>>str;
        int count = 0;
        for(int i=0;i<n;i++){
            if(str[i] != str[i+1]){
                count++;
            }
        }
        cout<<count/2<<endl;
    }
    return 0;
}
