#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void solve(int n){
    n = n-1;
    long num1 = (n/3);
    long num2 = (n/5);
    long num3 = (n/15);
    long summation3 = (num1*(num1+1)/2);
    long summation5 = (num2*(num2+1)/2);
    long sub = (num3*(num3+1)/2);
    printf("%ld\n", (summation5*5)+(summation3*3)-(sub*15));
}
int main(){
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        int n; 
        scanf("%d",&n);
        solve(n);
    }
    return 0;
}