#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	string str;
	int n, m;
	while(t--){
		cin>>n>>m;
		cin>>str;
		int counta = 0, countb = 0, countc = 0, countd = 0, counte = 0, countf =0, countg = 0;
		for(int i=0;i<str.size();i++){
			if(str[i] == 'A'){
			counta++;
			}
			if(str[i] == 'B'){
			countb++;
			}
			if(str[i] == 'C'){
			countc++;
			}
			if(str[i] == 'D'){
			countd++;
			}
			if(str[i] == 'E'){
			counte++;
			}
			if(str[i] == 'F'){
			countf++;
			}
			if(str[i] == 'G'){
			countg++;
			}
		}
		int count = 0;
		if(counta < m){
			count += m - counta;
		}
		if(countb < m){
			count += m - countb;
		}
		if(countc < m){
			count += m - countc;
		}
		if(countd < m){
			count += m - countd;
		}

		if(counte < m){
			count += m - counte;
		}
		
		if(countf < m){
			count += m - countf;
		}
		if(countg < m){
			count += m - countg;
		}
		cout<<count<<endl;
	}
	return 0;
}