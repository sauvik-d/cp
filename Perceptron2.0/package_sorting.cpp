#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<int> v1;
    int num;
    while(cin>>num){
        v1.push_back(num);
    }
    sort(v1.begin(), v1.end());
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    return 0;
}