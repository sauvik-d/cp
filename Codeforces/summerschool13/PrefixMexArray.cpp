#include <bits/stdc++.h>
using namespace std;
 
vector<long long int> Prefix_Mex(vector<long long int>& A, long long int n)
{
    
    long long int mx_element = *max_element(A.begin(), A.end());
 
    
    set<long long int> s;
    for (long long int i = 0; i <= mx_element + 1; i++) {
        s.insert(i);
    }
 
    
    vector<long long int> B(n);
    for (long long int i = 0; i < n; i++) {
 
        
        auto it = s.find(A[i]);
        if (it != s.end())
            s.erase(it);
 
        B[i] = *s.begin();
    }
 
    
    return B;
}
 
// Driver code
int main()
{
    long long int t; cin>>t;
    while(t--){
        
        long long int N; cin>>N;
        vector<long long int> A(N);
        for(long long int i=0;i<N;i++) cin>>A[i];

        vector<long long int> B = Prefix_Mex(A, N);
     
        
        for (long long int i = 0; i < N; i++) {
            cout << B[i] << " ";
        }
        cout<<endl;
    }
    return 0;
}