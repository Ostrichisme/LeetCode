class Solution {
public:
    bool canJump(vector<int>& nums) {
        /*貪心
        從右iterate回左，若該index可以到達目前最左的good index，那它也會為good index
        ex:target index為10
        假如index8為目前最左的good index(可以抵達target)，若index5可以跳到index8，那index5也可以抵達target，因此也為good index
        */
       int leftMost=nums.size()-1;
        for(int i=nums.size()-2;i>=0;i--)
            if(i+nums[i]>=leftMost)
                leftMost=i;
        return leftMost==0;

    }
};
