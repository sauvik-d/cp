#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    int n;
    while(t--){
        cin>>n;
        int temp;
        int zc = 0;
        int oc = 0;
        for(int i=0;i<n;i++){
            cin>>temp;
            if(temp == 1){
                oc++;
            }
            else{
                zc++;
            }
        }
        if(oc < zc){
            cout<<oc<<endl;
        }
        else{
            cout<<zc<<endl;
        }
    }
    return 0;
}
