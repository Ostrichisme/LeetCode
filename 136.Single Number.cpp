class Solution
{
public:
    int singleNumber(vector<int>& nums)
    {
        int ans=0,last=nums.size()-1;
        //xor���洫�v�M���X�v
        for(int i=0; i<=last; i++)
            ans^=nums[i];
        return ans;
    }
};
