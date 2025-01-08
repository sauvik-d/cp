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
	    int count = 1;
	    int max_count = 1;
	    for(int i=0;i<n;i++){
	        if(v1[i] == v1[i+1]){
	            count++;
	            max_count = max(count, max_count);
	        }
	        else{
	            
	            count = 1;
	        }
	    }
	    cout<<n-max_count<<endl;
	}
    return 0;
}
