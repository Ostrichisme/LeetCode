class Solution {
public:
    int search(vector<int>& nums, int target) {
       int l=0,r=nums.size()-1;
        //2���j
        while(l<=r) {
            int m=(l+r)/2;
            if(nums[m]==target)
                return m;
            //l~m����ջ��W
            if(nums[l]<=nums[m]) {
                if(target<nums[m]&&target>=nums[l])
                    r=m-1;
                else
                    l=m+1;
            }
            //l~m�����W�A����ۦA���W ex: 5601234 nums[l]=5 nums[m]=1
            else {
                if(target>nums[m]&&target<=nums[r])
                    l=m+1;
                else
                    r=m-1;
            }
        }
        return -1;
    }

};
