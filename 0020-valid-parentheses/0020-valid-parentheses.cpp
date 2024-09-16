class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int n=s.size();
        if(n==1)
        {
            return 0;
        }
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            {
                st.push(s[i]);
            }
            else{
                if(st.empty())
                {
                    return false;
                }
                else if(s[i]==')')
                {
                    if(st.top()!='(')
                    {
                        return 0;
                    }
                    else{
                        st.pop();
                    }
                }
                else if(s[i]=='}')
                {
                    if(st.top()!='{')
                    {
                        return 0;
                    }
                    else{
                        st.pop();
                    }
                }
                else
                {
                    if(st.top()!='[')
                    {
                        return 0;
                    }
                    else{
                        st.pop();
                    }
                }
            }
        }
        return 1;
    }
};