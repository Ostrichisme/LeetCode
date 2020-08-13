/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int index;
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        index=0;
        return buildPreorder(preorder,inorder,0,inorder.size()-1);
    }

    //preorder[index]��root�A����inorder[i]�A�N��inorder[l]~inorder[i-1]�����l��Ainorder[i+1]~inorder[r]���k�l��
    //���D�����j�覡��������root�A�A�̧ǻ��j���ͥ��l��Υk�l��A�Ppreorder�����X�覡���e��ۦP�A�]��index�̧ǻ��W�i�H�o��C���l��root
    TreeNode* buildPreorder(vector<int>& preorder,vector<int>& inorder,int l,int r) {
        if(l>r) return NULL;
        TreeNode* root=new TreeNode(preorder[index]);
        index++;
        for(int i=l;i<=r;i++){
            if(root->val==inorder[i]){
                root->left=buildPreorder(preorder,inorder,l,i-1);
                root->right=buildPreorder(preorder,inorder,i+1,r);
            }
        }
        return root;
    }
};
