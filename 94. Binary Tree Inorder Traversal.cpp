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
            //只要curr有東西就放進stack，並指向他的left
            while(curr){
                s.push(curr);
                curr=curr->left;
            }
            //跳出迴圈後代表left沒東西了，所以curr應該指向s.top()->right，並印出s.top()的值
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
    //中序:前中後，先做完左邊再印出node 最後做右邊
    void dfs(TreeNode* root) {
        if(root==NULL)
            return;
        dfs(root->left);
        ans.push_back(root->val);
        dfs(root->right);


    }
};
*/
