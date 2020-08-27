class Solution
{
private:
    int start,end;
public:
    //2分搜
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
            //若nums[m]>target表示r=m-1，若nums[m]==target且if沒成立表示nums[m-1]也等於target
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
            //若nums[m]<target表示l=m+1，若nums[m]==target且if沒成立表示nums[m+1]也等於target
            else if(nums[m]<=target)
                l=m+1;
            else
                r=m-1;
        }
        return -1;
    }
};
