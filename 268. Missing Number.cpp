class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //�Q��xor���S�ʱN�Ҧ�index�Pvalue�H��n xor�_�ӳ̫Ḩ�檺�ƧY������
        int miss=nums.size();
        for(int i=0;i<nums.size();i++)
            miss^=i^nums[i];
        return miss;
    }
};
