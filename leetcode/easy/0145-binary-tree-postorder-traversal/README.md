# Binary Tree Postorder Traversal

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given the `root` of a binary tree, return  *the postorder traversal of its nodes' values*.

 

 **Example 1:** 

 **Input:**  root = [1,null,2,3]

 **Output:**  [3,2,1]

 **Explanation:** 

 **Example 2:** 

 **Input:**  root = [1,2,3,4,5,null,8,null,null,6,7,9]

 **Output:**  [4,6,7,5,2,9,8,3,1]

 **Explanation:** 

 **Example 3:** 

 **Input:**  root = []

 **Output:**  []

 **Example 4:** 

 **Input:**  root = [1]

 **Output:**  [1]

 

 **Constraints:** 

- The number of the nodes in the tree is in the range [0, 100].
- -100 <= Node.val <= 100

 

 **Follow up:**  Recursive solution is trivial, could you do it iteratively?

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 10.9 MB (beats 71.12%)  
**Submitted:** 2026-11-05T19:00:33.642Z  

```cpp
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
```

---

[View on LeetCode](https://leetcode.com/problems/binary-tree-postorder-traversal/)