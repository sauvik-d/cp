#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    n = 1;  
    int x;
    while(n--){
        cin>>x;
        if(x>2){
            if(x%2 == 0){
                printf("YES\n");
            }
            else{
                printf("NO\n");
            }
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}