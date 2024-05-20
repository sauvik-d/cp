#include <bits/stdc++.h>
using namespace std;
long long int origin(long long int n){
    long long int sum = 0;
    while(n > 0){
        sum += n % 10;
        n = n/10;
    }
    return sum;
}
int main() {
	// your code goes here
    int t;
    cin>>t;
    long long int n;
    while(t--){
        cin>>n;
        long long int total = 0;
        int start = 0;
        for(long long int i=1;i<=n;i++){
            if(i % 10 == 0 && i >= 10){
                start = i/10;
            }
            if(i >= 10){
                total += start;
                start++;
            }
            else{
                total += i;
            }
        }
        cout<<total<<endl;
    }
    return 0;
}
