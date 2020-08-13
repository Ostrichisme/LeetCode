class Solution {
public:
    int maxArea(vector<int>& height) {
        int Max=0;
        int l=0;
        int r=height.size()-1;
        //每次算儲水範圍都是取兩側比較低的那端*寬度
        //而往內縮時取較低的那側來收縮，雖然收縮會導致寬度減少，但若獲得相對高的點，相乘後範圍反而會增加
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
