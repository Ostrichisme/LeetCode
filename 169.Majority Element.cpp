class Solution {
public:
    //�����벼�t��k
    //�C���q�}�C����X�@�藍�P�������A�N���̱q�}�C���R���A����M������Ӱ}�C�C
    //�ѩ�o�D�D�w�g�����@�w�s�b�@�ӥX�{���ƶW�L�@�b�������A�ҥH�M�����}�C��}�C���@�w�|�s�b�ܤ֤@�Ӥ����C
    int majorityElement(vector<int>& nums) {
    int ans=nums[0],count=1;
      for(int i=1;i<nums.size();i++) {
            if(ans==nums[i])
                count++;
            else {
                count--;
                if(count==0){
                    count=1;
                    ans=nums[i];
                }
            }
      }
      return ans;
    }
};
