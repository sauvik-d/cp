#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    int n, x, y;
    while(t--){
        cin>>n>>x>>y;
        int flag = 0;
        while(n--){
            x = x - 2;
            if(x>=n && y/3 >= n){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}