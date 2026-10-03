class Solution {
public:
    bool isValid(string s) {
        vector<char> stk;

        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                stk.push_back(c);
            }
            else if (c == ')') {
                if (stk.empty() || stk.back() != '(') {
                    return false;
                }
                stk.pop_back();
            }
            else if (c == '}') {
                if (stk.empty() || stk.back() != '{') {
                    return false;
                }
                stk.pop_back();
            }
            else if (c == ']') {
                if (stk.empty() || stk.back() != '[') {
                    return false;
                }
                stk.pop_back();
            }
        }

        return stk.empty();
    }
};