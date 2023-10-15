#include<bits/stdc++.h>
using namespace std;
#define long long ll
int all_prod(int arr[], int n){
    int count = 1;
    for(int i=0;i<n;i++){
        count = count * arr[i];
    }
    return count; 
}
int main(){
    int t;
    cin>>t;
    int n;
    int arr2[t];
    for(int k=0; k<t;k++){
    cin>>n;
    int arr[n];
    for(int j=0;j<n;j++){
        cin>>arr[j];
    }
    vector<int> v1;
    for(int i=0;i<n;i++){
        arr[i] = arr[i] + 1;
        v1.push_back(all_prod(arr, n));
        arr[i] = arr[i] - 1;
    }
    arr2[k] = *max_element(v1.begin(), v1.end());
    //cout<<arr2[k]<<" ";
    }
    for(auto l: arr2){
        cout<<l<<"\n";
    }
    //cout<<"Hehe";
    return 0;
}