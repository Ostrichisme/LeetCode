class Solution
{
private:
    int start,end;
public:
    //2���j
    vector<int> searchRange(vector<int>& nums, int target)
    {
        return {getStart(nums,target,0,nums.size()-1),getEnd(nums,target,0,nums.size()-1)};
    }
    int getStart(vector<int>& nums, int& target,int l,int r)
    {
        while(l<=r)
        {
            int m=(l+r)/2;
            if(nums[m]==target&&(m==0||nums[m-1]!=target))
                return m;
            //�Ynums[m]>target���r=m-1�A�Ynums[m]==target�Bif�S���ߪ��nums[m-1]�]����target
            else if(nums[m]>=target)
                r=m-1;
            else
                l=m+1;
        }
        return -1;
    }
    int getEnd(vector<int>& nums, int& target,int l,int r)
    {
        while(l<=r)
        {
            int m=(l+r)/2;
            if(nums[m]==target&&(m==nums.size()-1||nums[m+1]!=target))
                return m;
            //�Ynums[m]<target���l=m+1�A�Ynums[m]==target�Bif�S���ߪ��nums[m+1]�]����target
            else if(nums[m]<=target)
                l=m+1;
            else
                r=m-1;
        }
        return -1;
    }
};
