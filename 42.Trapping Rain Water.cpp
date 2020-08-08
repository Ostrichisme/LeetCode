class Solution {
public:
    int trap(vector<int>& height) {
       int s=height.size();
    vector<int> left_max(s),right_max(s);
    int ans=0;
    if(s==0)
        return ans;
    left_max[0]=height[0];
    for(int i=1;i<s;i++)
        left_max[i]=max(height[i],left_max[i-1]);

    right_max[s-1]=height[s-1];
    for(int i=s-2;i>=0;i--)
        right_max[i]=max(height[i],right_max[i+1]);
    for(int i=1;i<s-1;i++)
        ans+=min(left_max[i],right_max[i])-height[i];
    return ans;


    }
};
