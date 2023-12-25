#include<bits/stdc++.h>
using namespace std;
bool isVowel(char c){
	if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
		return true;
	}
	else{
		return false;
	}
}
bool isConsonent(char c){
	if(isVowel(c) != false){
		return true;
	}
	else{
		return false;
	}
}
bool isSame(char ch1, char ch2){
	if(isVowel(ch1) == isVowel(ch2)){
		return true;
	}
	else if(isConsonent(ch1) == isConsonent(ch2)){
		return true;
	}
	else{
		return false;
	}
}
int main(){
	int t;
	string s;
	cin>>t;
	while(t--){
		cin>>s;
		string str = "CODETOWN";
		if(s == str){
			cout<<"YES\n";
		}
		else{
			int flag = 0;
			for(int i=0;i<8;i++){
				if(isSame(s[i], str[i]) != true){
					flag = 1;
				}
			}
			if(flag == 1){
				cout<<"NO\n";
			}
			else{
				cout<<"YES\n";
			}
		}
	}
}