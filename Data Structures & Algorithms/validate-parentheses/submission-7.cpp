class Solution {
public:
    bool isValid(string s) {
        stack<char> myStack ;
        for(char ch : s){
             if(ch == '(') myStack.push('(');
             else if(ch == '{') myStack.push('{');
             else if(ch == '[') myStack.push('[');
             else if(ch == ')') {
                if(myStack.empty() || myStack.top() != '(') return false;
                 myStack.pop();
             }
             else if(ch == '}') {
                if(myStack.empty() ||  myStack.top() != '{') return false;
                 myStack.pop();
             }
             else if(ch == ']') {
                if(myStack.empty() ||  myStack.top() != '[') return false;
                  myStack.pop();
             }
            
        }
        if(myStack.empty()) return true;
        return false;
    }
};
