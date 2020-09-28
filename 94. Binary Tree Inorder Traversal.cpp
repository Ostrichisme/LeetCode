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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*> s;
        TreeNode *curr=root;
        while(curr||!s.empty()){
            //�u�ncurr���F��N��istack�A�ë��V�L��left
            while(curr){
                s.push(curr);
                curr=curr->left;
            }
            //���X�j���N��left�S�F��F�A�ҥHcurr���ӫ��Vs.top()->right�A�æL�Xs.top()����
            curr=s.top()->right;
            ans.push_back(s.top()->val);
            s.pop();
        }
        return ans;
    }

};
/* recursive way
class Solution {
    private: vector<int> ans;
public:
    vector<int> inorderTraversal(TreeNode* root) {
        dfs(root);
        return ans;
    }
    //����:�e����A����������A�L�Xnode �̫ᰵ�k��
    void dfs(TreeNode* root) {
        if(root==NULL)
            return;
        dfs(root->left);
        ans.push_back(root->val);
        dfs(root->right);


    }
};
*/
