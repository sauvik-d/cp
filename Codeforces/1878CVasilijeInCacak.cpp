#include<bits/stdc++.h>
using namespace std;
string check(){
    int n, k, x;
    string result;
    cin>>n;
    cin>>k;
    cin>>x;
    if(x >= (k*(k+1)/2)){
        result = "YES";
        //v1.push_back(result);
    }
    else{
        result = "NO";
        //v1.push_back(result);
    }
    return result;
}
int main(){
    int t;
    cin>>t;
    string result;
    vector<string> v1;
    while(t!=0){
        v1.push_back(check());
        t--;
    }
    cout<<"hehe";
    for(int i=0;i<t;i++){
        cout<<v1[i]<<"\n";
    }
}