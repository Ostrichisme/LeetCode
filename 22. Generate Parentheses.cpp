class Solution
{
private:
    int total;
    vector<string> ans;
public:
    vector<string> generateParenthesis(int n)
    {

        total=n;
        gen("",0,0);

        return ans;
    }
    void gen(string s,int l, int r)
    {
        if(l==total&&r==total)
        {
            ans.push_back(s);
            return;
        }
        //�u����'('�A�B'('�ƶq�̦h��total
        if(l<total)
            gen(s+"(",l+1,r);
        //��')'�ƶq��'('�֮ɤ~�i��')'
        if(r<l)
            gen(s+")",l,r+1);
    }
};
