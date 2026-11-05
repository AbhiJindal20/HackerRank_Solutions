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
        vector<int> ele;
        inorder(root,ele);
        return ele;
        }
private:
    void inorder(TreeNode* node, vector<int>& ele){
        if (node == nullptr) {
            return;
        }
        inorder(node->left,ele);
        ele.push_back(node->val);
        inorder(node->right,ele);
    }
};