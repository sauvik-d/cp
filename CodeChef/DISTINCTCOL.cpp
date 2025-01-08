#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        std::vector<int> v1(n);
        for(int i=0;i<n;i++){
            cin>>v1[i];
        }
        sort(v1.begin(), v1.end());
        cout<<v1[n-1]<<endl;
    }
    return 0;
}
