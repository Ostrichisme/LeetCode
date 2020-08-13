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

    //preorder[index]為root，等於inorder[i]，代表inorder[l]~inorder[i-1]為左子樹，inorder[i+1]~inorder[r]為右子樹
    //此題的遞迴方式為先產生root，再依序遞迴產生左子樹及右子樹，與preorder的走訪方式中前後相同，因此index依序遞增可以得到每顆子樹的root
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
