#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    int root = 0;
    int count = 0;
    for(int i=1;i<=n;i++){
        root = sqrt(i);
        if(root*root == i){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}