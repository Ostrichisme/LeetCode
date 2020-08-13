class Solution {
public:
    int maxArea(vector<int>& height) {
        int Max=0;
        int l=0;
        int r=height.size()-1;
        //�C�����x���d�򳣬O���ⰼ����C������*�e��
        //�ө����Y�ɨ����C�������Ӧ��Y�A���M���Y�|�ɭP�e�״�֡A���Y��o�۹ﰪ���I�A�ۭ���d��Ϧӷ|�W�[
        while(l<r){
            Max=max(Max,min(height[l],height[r])*(r-l));
            if(height[l]<height[r])
                l++;
            else
                r--;
        }
        return Max;
    }
};
