class Solution
{
public:
    int singleNumber(vector<int>& nums)
    {
        int ans=0,last=nums.size()-1;
        //xor有交換率和結合率
        for(int i=0; i<=last; i++)
            ans^=nums[i];
        return ans;
    }
};
