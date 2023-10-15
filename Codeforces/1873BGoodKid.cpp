#include<bits/stdc++.h>
using namespace std;
#define long long ll
int all_prod(int* arr, int n){
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
    int *arr2 = (int*)malloc(sizeof(int)*t);
    for(auto i=0; i<t;i++){
    cin>>n;
    int *arr = (int*)malloc(sizeof(int)*n);
    
    for(int j=0;j<n;j++){
        cin>>arr[j];
    }
    vector<int> v1;
    for(int i=0;i<n;i++){
        arr[i] = arr[i] + 1;
        v1.push_back(all_prod(arr, n));
        arr[i] = arr[i] - 1;
    }
    sort(v1.begin(), v1.end());
    arr2[t] = v1[n-1];
    cout<<"->"<<v1[n-1];
    }
    cout<<"\n";
    for(int i=0;i<t;i++){
        cout<<arr2[i]<<"\n";
    }
    return 0;
}