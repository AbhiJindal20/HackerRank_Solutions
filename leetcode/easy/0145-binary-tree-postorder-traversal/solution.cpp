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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ele;
        postorder(root, ele);
        return ele;
    }
private:
    void postorder(TreeNode* root, vector<int>& ele){
        if (root == nullptr){
            return ;
        }
        postorder(root->left,ele);
        postorder(root->right,ele);
        ele.push_back(root->val);
    }
};