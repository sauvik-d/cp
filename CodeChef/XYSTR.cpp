#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t; cin>>t;
    while(t--){
        string str; cin>>str;
        vector<int> v1(str.size());
        for(int i=0;i<str.size();i++){
            v1[i] = str[i];
        }
        //sort(v1.begin(), v1.end());
        int count = 0;
        for(int i=0;i<str.size();i++){
            if((v1[i] == 'x' && v1[i+1]== 'y') || (v1[i] == 'y' && v1[i+1] == 'x')){
                count++;
                i++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
