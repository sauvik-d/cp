class Solution {
public:
    bool isPalindrome(int x) {
        if(x< 0){
            return false;
        }
        long long int store = x;
        long long int pal = 0;
        int digit;
        while(store!=0){
            digit = store%10;
            pal = (pal*10) + digit;
            store = store / 10;
        }
        if(pal == x){
            return true;
        }
        else{
            return false;
        }
    }
};