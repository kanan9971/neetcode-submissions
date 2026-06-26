class Solution {
public:
bool isOpeningBracket(char ch) {
    return (ch == '(' || ch == '{' || ch == '[');
}
bool isClosingBracket(char ch) {
    return (ch == ')' || ch == '}' || ch == ']');
}


bool ismatching(char open, char close ){
    if(open == '('&& close == ')'){return true;}
    if (open == '[' && close == ']'){ return true;}
    if (open == '{' && close == '}') {return true;}
    return false;
}

    bool isValid(string s) {
        stack<char> st;
        for( int i = 0; i< s.size();i++){

            if(isOpeningBracket(s[i])){
                st.push(s[i]);
            }

            if(s.size()%2 == 1)
            {return false;}

            else if(isClosingBracket(s[i])){
                if (st.empty()) return false;
                if(! ismatching(st.top(),s[i])){
                    return false;
                }

                else {
                    st.pop();
                }
            }


            

        }

        if(st.empty())
        return true;

        else{
            return false;
        }
    }
};
