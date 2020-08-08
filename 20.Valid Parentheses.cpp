class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;
        if(s.length()==0)
            return true;
        else if(s.length()%2==1)
            return false;
        else
        {
            for(int i=0; i<s.length(); i++)
            {
                if(s[i]==')'||s[i]=='}'||s[i]==']')
                {
                    if(st.size()==0)
                        return false;
                    else if(s[i]==')'&&st.top()!='(')
                        return false;
                    else if(s[i]=='}'&&st.top()!='{')
                        return false;
                    else if(s[i]==']'&&st.top()!='[')
                        return false;
                    else
                        st.pop();
                }
                else
                    st.push(s[i]);
            }
            if(st.size()==0)
                return true;
            else
                return false;
        }

    }
};
