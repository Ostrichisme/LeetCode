class Solution {
public:
    bool canJump(vector<int>& nums) {
        /*�g��
        �q�kiterate�^���A�Y��index�i�H��F�ثe�̥���good index�A�����]�|��good index
        ex:target index��10
        ���pindex8���ثe�̥���good index(�i�H��Ftarget)�A�Yindex5�i�H����index8�A��index5�]�i�H��Ftarget�A�]���]��good index
        */
       int leftMost=nums.size()-1;
        for(int i=nums.size()-2;i>=0;i--)
            if(i+nums[i]>=leftMost)
                leftMost=i;
        return leftMost==0;

    }
};
