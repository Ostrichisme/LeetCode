class Solution {
public:
    int maxProduct(vector<int>& nums) {
        //���魼�n�̤j
        int finalMax=nums[0];
        int Max=nums[0];
        int Min=nums[0];
        for(int i=1;i<nums.size();i++){
            //�J��t�ơAMax�|�ܤp�AMin�Ϧӷ|�ܤj
            if(nums[i]<0){
                swap(Max,Min);
            }
            //�Ҽ{�Nnums[i]�[�J�ɡA�n���max*nums[i]�άO�Onums[i]��@�����̤j���n
            Max=max(nums[i],Max*nums[i]);
            Min=min(nums[i],Min*nums[i]);
            finalMax=max(finalMax,Max);
        }
        return finalMax;
    }
};
