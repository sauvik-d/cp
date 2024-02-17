#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int n, h;
    while(t--){
        
        
        cin>>n>>h;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int x = 0;
        for(int i=0;i<n;i++){
            if(x > a[i]){
                continue;
            }
            else if(h > a[i]){
                h -= a[i];
            }
            else{
                x += a[i] - h + 1;
            }
        }
        cout<<x<<endl;
    }
    return 0;
}