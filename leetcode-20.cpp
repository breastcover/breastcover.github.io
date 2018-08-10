class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char,char> m={{')','('},{']','['},{'}','{'}};
        for(auto c:s)
        {
            switch(c){
                case '(':
                case '[':
                case '{':
                    st.push(c);
                    break;
                case ')':
                case ']':
                case '}':
                    if(st.empty()||st.top()!=m[c])
                    {
                        return false;
                    }
                    st.pop();
                    break;
            }

        }
        return st.empty();
    }
};
