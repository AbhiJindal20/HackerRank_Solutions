# Tree: Level Order Traversal

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a pointer to the root of a binary tree, you need to print the level order traversal of this tree. In level-order traversal, nodes are visited level by level from left to right. Complete the function $levelOrder$ and print the values in a single line separated by a space.

For example:

         1
    	  \
		   2
			\
			 5
			/  \
		   3    6
			\
			 4	

For the above tree, the level order traversal is $1 -> 2 -> 5 -> 3 -> 6 -> 4$.


**Input Format**

You are given a function,

	void levelOrder(Node * root) {
    	
    }

**Constraints**

$1$ $\leq$Nodes in the tree  $\leq$ $500$

**Output Format**

Print the values in a single line separated by a space.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-01T19:10:19.458Z  

```cpp

/*
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};
*/

    void levelOrder(Node * root) {
        if (root == nullptr) return ;
        queue<Node*> q;
        q.push(root);
        while (!q.empty()) {
            Node* current = q.front();
            cout << current->data << " ";
            q.pop();
            if (current->left != nullptr) {
                q.push(current->left);
            }
            if (current->right != nullptr) {
                q.push(current->right);
            }
        }
    }


```

---

[View on HackerRank](https://www.hackerrank.com/challenges/tree-level-order-traversal/problem)