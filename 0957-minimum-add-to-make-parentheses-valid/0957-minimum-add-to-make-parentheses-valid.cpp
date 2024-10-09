class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        int c=0;
       for(auto x:s)
       {
        if(x=='(')
        {
            st.push(x);
        }
        else{
            if(st.empty())
            {
                c++;
            }
            else{
                st.pop();
            }
        }
       }
       return (st.size()+c);
    }
};