class Solution {
public:
    bool isValid(string s) {
    stack<char> stack;
        int idx = 0;
        // If the string is empty, return true...
        if(s.size() == 0){
            return true;
        }
        // Create a loop to check parentheses...
        while(idx < s.size()){
            // If it contains the below parentheses, push the char to stack...
            if( s[idx] == '(' || s[idx] == '[' || s[idx] == '{' ){
                stack.push(s[idx]);
            }
            // If the current char is a closing brace provided, pop the top element...
            // Stack is not empty...
            else if ( (s[idx] == ')' && !stack.empty() && stack.top() == '(') ||
                        (s[idx] == '}' && !stack.empty() && stack.top() == '{') ||
                        (s[idx] == ']' && !stack.empty() && stack.top() == '[')
                      ){
                stack.pop();
            }
            else {
                return false;       // If The string is not a valid parenthesis...
            }
            idx++;      // Increase the index...
        }
        // If stack.empty(), return true...
        if(stack.empty()) {
            return true;
        }
        return false;
    }
};