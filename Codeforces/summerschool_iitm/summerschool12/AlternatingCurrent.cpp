#include<bits/stdc++.h>
using namespace std;
int main(){
	string str; cin>>str;
	stack<char> st;
	for(int i=0;i<str.size();i++){
		if(st.empty()){
			st.push(str[i]);
		}
		else if(str[i] != st.top()){
			st.push(str[i]);
		}
		else{
			st.pop();
		}
	}
	if(st.empty()){
		cout<<"Yes"<<endl;
	}
	else{
		cout<<"No"<<endl;
	}
	return 0;
}