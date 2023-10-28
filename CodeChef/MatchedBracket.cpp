//Incomplete do the length and its occurrence...
#include<bits/stdc++.h>
using namespace std;
void depth(vector<long> v1){
    int depth = 0;
    int mx = 1;
    int pos;
    for(long i=0;i<v1.size();i++){
        if(v1[i] == 1){
            depth++;
        }
        if(v1[i] == 2){
            if(depth > mx){
                pos = i;
            }
            mx = max(mx, depth);
            depth = 0;
        }
    }
    
    cout<<mx<<" ";
    cout<<pos<<" ";
}
void length(vector<long> v1){
    int left = 0;
    int len = 1;
    int mx = 0;
    int pos;
    for(long i=0;i<v1.size();i++){
        if(v1[i] == 1){
            len++;
            left++;
        }
        else if(v1[i] == 2){
            left--;
            len++;
        }
        if(left == 0){
            if(len > mx){
                pos = i - len + 2;
            }
            mx = max(mx, len);
            len = 0;        
        }

    }
    cout<<mx<<" ";
    cout<<pos;
}
int length_occur(vector<long> v1);
int main(){
    long n;
    cin>>n;
    vector<long> v1(n);
    for(long i=0;i<n;i++){
        cin>>v1[i];
    }
    depth(v1);
    length(v1);
    return 0;
}