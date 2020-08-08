class Solution
{
public:
    vector<int> productExceptSelf(vector<int>& nums)
    {
        // dp 計算每個index左邊與右邊的乘積，相乘即為答案
        const int len=nums.size();
        vector<int> ans(len,1);
        for(int i=1; i<len; i++)
            ans[i]=ans[i-1]*nums[i-1];
        int right=1;
        for(int i=len-1; i>=0; i--)
        {
            ans[i]*=right;
            right*=nums[i];
        }
        return ans;
    }
};
