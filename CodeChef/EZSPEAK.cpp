#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

int checkcons(char ch){
    switch(ch){
        case 'a': return 0; break;
        case 'e': return 0; break;
        case 'i': return 0; break;
        case 'o': return 0; break;
        case 'u': return 0; break;
        default: return 1; break;
    }
}
void solve(){
    int n;
    string str;
    cin>>n>>str;
    int total = 0;
    int mx = 0;
    for(int i=0;i<n;i++){
        if(checkcons(str[i]) == 1){
            total += 1;
            if(total == 4){
                break;
            }
        }
        else{
            total = 0;
        }
    }
    if(total >= 4){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
