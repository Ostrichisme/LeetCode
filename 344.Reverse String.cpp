class Solution
{
public:
    void reverseString(vector<char>& s)
    {
        int length=s.size(),right=length-1,half=length/2;
        for(int i=0; i<half; i++)
            swap(s[i],s[right-i]);
    }
};
