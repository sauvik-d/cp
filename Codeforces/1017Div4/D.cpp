#include<bits/stdc++.h>
using namespace std;
void solve(){
	string str1, str2; cin>>str1>>str2;
	if(str1 == str2){
		cout<<"YES"<<endl;
		return;
	}
	else{
		int cL = 0, cR = 0;
		for(int i=0;i<str1.size();i++){
			if(str1[i] == 'L') cL++;
			else cR++;
		}
		int cL2 = 0, cR2 = 0;
		for(int i=0;i<str2.size();i++){
			if(str2[i] == 'L') cL2++;
			else cR2++;
		}

		if(cL == cL2 || cR == cR2){
			cout<<"NO"<<endl;
			return;
		}
		else if(cL2 <= 2*cL && cR2 <= 2*cR){
			cout<<"YES"<<endl;
			return;
		}
		else{
			cout<<"NO"<<endl;
			return;
		}
	}
}
void solve2(){
	string str1, str2; cin>>str1>>str2;
	if(str1.size() > str2.size()){
		cout<<"NO"<<endl;
		return;
	}
	else if(str2.size() > 2*str1.size()){
		cout<<"NO"<<endl;
		return;
	}
	int i=0,j=0;
	int flag = 0;
	while(i<str1.size() && j<str2.size()){
		char curr = str1[i];
		if(str2[j] != curr){
			flag = 1;
			break;
		}
		if(j+1<str2.size() && str2[j+1] == curr){
			j+=2;
		}
		else{
			j+=1;
		}
		i++;
	}
	if(flag == 1){
		cout<<"NO"<<endl;
		return;
	}
	if(i==str1.size() && j==str2.size()){
		cout<<"YES"<<endl;
		return;
	}
	else{
		cout<<"NO"<<endl;
		return;
	}
}
void solve3(){
	string str1, str2; cin>>str1>>str2;
	if(str1.size() <= str2.size() && str2.size() <= 2*str1.size()){
		cout<<"YES"<<endl;
		return;
	}
	else{
		cout<<"NO"<<endl;
		return;
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		solve2();
	}
}