#include<bits/stdc++.h>
using namespace std;
int main(){
		int n;
    	cin>>n;
    	unordered_map<string,int>m;
    	for(int i=0; i<n; ++i){
        	string s;
        	cin>>s;
        	auto it= m.find(s);
        	if(it==m.end()){
            	m[s];
            	cout<<"OK"<<endl;
        	}
        	else{
            	m[s]++;
            	s=s+to_string(m[s]);
            	m[s];
            	cout<<s<<endl;
    	}
    }
	return 0;
}