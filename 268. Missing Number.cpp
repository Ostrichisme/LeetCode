class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //利用xor的特性將所有index與value以及n xor起來最後落單的數即為答案
        int miss=nums.size();
        for(int i=0;i<nums.size();i++)
            miss^=i^nums[i];
        return miss;
    }
};
