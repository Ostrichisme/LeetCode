class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    int nonZeroIndex=0; //�����U���J��D0���Ʀr�ɭn��i����index
    for(int i=0;i<nums.size();i++){
        if(nums[i]!=0){
            nums[nonZeroIndex]=nums[i];
            nonZeroIndex++;
        }
    }
    //�ѤU����0
    for(int i=nonZeroIndex;i<nums.size();i++)
        nums[i]=0;
    }
};


