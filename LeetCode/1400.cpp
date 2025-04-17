class Solution {
public:
    bool canConstruct(string s, int k) {
        if(s.length() < k) return false;
        if(s.length() == k) return true;

        int oddCount = 0;

        vector<int> freq(26);

        for(auto ch: s) freq[ch - 'a']++;
        for(int i=0;i<freq.size();i++){
            if(freq[i] % 2 == 1) oddCount++;
        }
        if(oddCount <= k) return true;
        else return false;
    }
};