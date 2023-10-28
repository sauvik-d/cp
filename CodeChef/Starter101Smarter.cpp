#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int l, v1, v2;
    while(t--){
        cin>>l>>v1>>v2;
        int t, h;
        t = ceil(l*1.0/v1);
        h = ceil(l*1.0/v2);
        if(t == h){
            cout<<-1<<endl;
        }
        else{
            cout<<t-h-1<<endl;
        }
    }
    return 0;
}