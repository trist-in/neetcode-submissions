class Solution {
public:
    bool isValid(string s) {
        stack<char> str;
        unordered_map<char,char> closed = {
            {')','('},
            {']','['},
            {'}','{'}
        };

        for(char c : s){
            if(closed.count(c)){
                if(!str.empty() && str.top() == closed[c]){
                    str.pop();
                }else{
                    return false;
                }
            }else{
                str.push(c);
            }
        }
        return str.empty();
    }
};

//s.back() == last char
//s[0] == first
/*
method:
if s[0] == s.back(), proceed
s[1] == s.back() - 1, proceed
etc
*/
