class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    int left=1,right=nums.size()-1;
    //鴿籠，二分搜算的是value，cnt<=mid代表1~mid不會有duplicate
    while(left<right){
        int cnt=0,mid=(left+right)/2;
        for(int num:nums)
            if(num<=mid)
                cnt++;
        if(cnt<=mid)
            left=mid+1;
        else
            right=mid;
    }
    return left;

    }
};
