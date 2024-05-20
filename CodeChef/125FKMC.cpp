#include <bits/stdc++.h>
using namespace std;
int mx(int a, int b){
    if(a > b){
        return a;
    }
    else{
        return b;
    }
}
int main() {
    // your code goes here
    int t;
    cin>>t;
    string str;
    while(t--){
        cin>>str;
        int medical = 0;
        int max = 0;
        for(int i=0;i<str.size();i++){
            if(str[i] == '0'){
                medical++;
            }
            if(str[i] == '1'){
                max = mx(medical, max);
                medical = 0;
            }
        }
        max = mx(medical, max);
        int pres = 0;
        for(int i=0;i<str.size();i++){
            if(str[i] == '1'){
                pres++;
            }
        }
        cout<<max<<endl;
        cout<<pres<<endl;
        cout<<max+pres<<endl;
    }
    return 0;
}
