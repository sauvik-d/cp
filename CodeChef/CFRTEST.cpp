#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> v1(n);
        for(int i=0;i<n;i++){
            cin>>v1[i];
        }
        sort(v1.begin(), v1.end());
        auto it = unique(v1.begin(), v1.end());
        v1.erase(it, v1.end());
        int k = v1.size();
        cout<<k<<endl;
    }
    return 0;
}
