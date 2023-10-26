#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    vector<long long> arr(n);
    for(long long i=0;i<n;i++){
        cin>>arr[i];
    }
    long long maximum = 0;
    long long count = 0;
    sort(arr.begin(), arr.end());
    for(long long i = 0; i<n;i++){
        count = (n-i)*arr[i];
        maximum = max(count, maximum);
    }
    cout<<maximum<<endl;
    return 0;
}