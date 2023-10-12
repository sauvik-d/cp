#include<iostream>
using namespace std;
int main(){
    // This is a diff. one...
    int n;
    cin>>n;
    int arr[n][3];
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    
    int final = 0;
    for(int k=0;k<n;k++){
        int count = 0;
        for(int l=0;l<3;l++){
            if(arr[k][l] == 1){
                count++;
            }
            
        }
        if(count >= 2){
                final++;
            }
    }
    cout<<final;
    return 0;
}