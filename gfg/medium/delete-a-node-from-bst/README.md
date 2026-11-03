# Delete from BST

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a binary search tree and a node value  **x**. Delete the node with the given value x from the tree. If no node with value x exists, then do not make any change. 

Return the root of the tree after deleting the node with value x.

 **Note:** You may return any valid BST after deleting the specified node. The driver code will print true if the resulting tree is a valid BST after deletion, and false otherwise.

 **Examples :** 

```
Input: root = [2, 1, 3], x = 12

Output: true
Explanation: In the given input there is no node with value 12, so the tree will remain same.
```

```
Input: root = [1, N, 2, N, 8, 5, 11, 4, 7, 9, 12], x = 11

Output: true
Explanation: In the given input, one of the possible tree after deleting 11 will be

```

```
Input: root = [2, 1, 3], x = 3

Output: [2, 1]
Explanation: In the given input, only possible tree after deleting 3 will be

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-03T09:03:02.825Z  

```cpp
/* Structure of a Binary Search Tree node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
}; */

class Solution {
  public:
    Node* delNode(Node* root, int x) {
        // code here
        if (root == nullptr)
            return nullptr;
        
        if (x < root->data) {
            root->left = delNode(root->left, x);
        } else if (x > root->data){
            root->right = delNode(root->right,x);
        } else {
            if (root->left == nullptr) {
                Node* temp = root->right;
                delete root;
                return temp;
            } else if (root->right == nullptr) {
                Node* temp = root->left;
                delete root;
                return temp;
            }
            
            Node* curr = root->right;
            while(curr && curr->left != nullptr) {
                curr = curr->left;
            }
            root->data = curr->data;
            root->right = delNode(root->right, curr->data);
        }
        return root;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/delete-a-node-from-bst/1)