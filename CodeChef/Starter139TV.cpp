#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    int count = 0;
    for(int i=1;i<=t;i++){
        if(i % 2 != 0){
            count++;
        }
    }
    cout<<count<<endl;
}
