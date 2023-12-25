#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	int a,b;
	while(t--){
		cin>>a>>b;
		int transfer = 0;
			 while(b != 1){
				if(a%b == 0){
					break;
				}
				a += 1;
				b -= 1;
				transfer++;
			}
			
				cout<<transfer<<endl;
			
		
		/*else{
			while(a != 1){
				if(b%a == 0){
					break;
				}
				b += 1;
				a -= 1;
				transfer++;
			}
			if(b%a == 0){
				cout<<transfer<<endl;
			}
		}*/
	}
}