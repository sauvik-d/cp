#include<iostream>
using namespace std;
int main(){
    // This is a different code.....
    int n;
    cin>>n;
    string arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    string ans = "";
    for(int j=0;j<n;j++){
        if(size(arr[j]) > 10){
        ans = arr[j][0] + to_string(size(arr[j])-2) + arr[j][size(arr[j]) - 1];
        cout<<ans<<"\n";
        }
        else{
            cout<<arr[j]<<"\n";
        }
    }
}