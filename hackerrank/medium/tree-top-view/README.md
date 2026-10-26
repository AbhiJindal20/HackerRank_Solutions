# Tree : Top View

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a pointer to the root of a binary tree, print the top view of the binary tree.  

The tree as seen from the top the nodes, is called the top view of the tree.

For example :

	   1
        \
         2
          \
           5
          /  \
         3    6
          \
           4
 
 Top View : $1 -> 2 -> 5 -> 6$
 
 Complete the function $topView$ and print the resulting values on a single line separated by space.
    
 

**Input Format**

You are given a function,
	
    void topView(node * root) {
    
    }

**Constraints**

$1$ $\leq$Nodes in the tree  $\leq$ $500$

**Output Format**

Print the values on a single line separated by space.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-26T14:58:11.572Z  

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

    void topView(Node * root) {
        if (root == NULL) return;

        map<int, int> topNodeMap;
        queue<pair<Node*, int>> q;
    
        q.push({root, 0});
    
    while (!q.empty()) {
        auto front = q.front();
        q.pop();
        
        Node* curr = front.first;
        int hd = front.second;
        
        if (topNodeMap.find(hd) == topNodeMap.end()) {
            topNodeMap[hd] = curr->data;
        }
        
        if (curr->left != NULL) {
            q.push({curr->left, hd - 1});
        }
        if (curr->right != NULL) {
            q.push({curr->right, hd + 1});
        }
    }
    
    for (auto it : topNodeMap) {
        cout << it.second << " ";
    }

    }


```

---

[View on HackerRank](https://www.hackerrank.com/challenges/tree-top-view/problem)