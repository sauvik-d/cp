#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
	string str;
	cin>>str;
	vector<int> arr;
	for(int i=0;i<str.size();i++){
		if(str[i] != '+'){
			arr.push_back(int(str[i]));
		}
	}
	sort(arr.begin(), arr.end());
	//for(int i=0;i<arr.size();i++) cout<<arr[i]<<" ";
	for(int i=0;i<arr.size();i++){
		if(i != arr.size()-1){
			cout<<arr[i]-48<<"+";
		}
		else{
			cout<<arr[i]-48;
		}
	}
	//cout<<ans<<endl;
	return 0;
}