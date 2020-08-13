class Solution {
public:
    void sortColors(vector<int>& nums) {
        //zero��two���O�N��g�Lswap��0�P2��index
        int zero=-1;
        int two=nums.size();
        int i=0;
        while(i<two){
            //�Yi==zero+1�A��ܳ��O0�A�S���nswap
            if(nums[i]==0&&i!=zero+1){
                zero++;
                swap(nums[i],nums[zero]);
            }
            else if(nums[i]==2&&i!=two-1){
                two--;
                swap(nums[i],nums[two]);
            }
            else
                i++;
        }

    }
};
