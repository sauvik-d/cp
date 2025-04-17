class Solution {
public:
    
    bool canBeValid(string s, string locked) {
        if(s.length() % 2 != 0) return false;
        stack<int> openBrace, unlock;
        for(int i=0;i<locked.length();i++){
            if(locked[i] == '0') unlock.push(i);
            else if(s[i] == '(') openBrace.push(i);
            else if(s[i] == ')'){
                if(!openBrace.empty()){
                    openBrace.pop();
                }
                else if(!unlock.empty()){
                    unlock.pop();
                }
                else return false;
            }
        }
        while(!openBrace.empty() && !unlock.empty() && openBrace.top() < unlock.top()){
            openBrace.pop();
            unlock.pop();
        }
        if(!openBrace.empty()){
            return false;
        }
        return true;
    }
};