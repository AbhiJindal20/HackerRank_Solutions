# Balanced Binary Tree Counter

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a height  **h**, find the maximum number of distinct balanced binary trees of height exactly h.

A binary tree is balanced if, for every node, the heights of its left and right subtrees differ by at most 1. A tree with a single node has height 1. An empty tree has height 0.

 **Note:**  Since the answer can be very large, return it modulo 109 + 7.

 **Examples:** 

```
Input: h = 1
Output: 1
Explanation: Only one tree of height 1 exists i.e. a single node.
```

```
Input: h = 2
Output: 3 
Explanation: 3 distinct balanced trees of height 2 exist.

```

```
Input: h = 3
Output: 15
Explanation: 15 distinct balanced trees of height 3 exist.

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-05T20:03:36.097Z  

```cpp
class Solution {
  public:
    int countBT(int h) {
        // code here
        if (h == 0 || h == 1) return 1;
        long long mod = 1e9 + 7;
        long long dp0 = 1;
        long long dp1 = 1;
        long long ans = 0;
        for (int i=2;i<=h;++i){
            ans = (dp1 * (dp1 + 2 * dp0)) % mod;
            dp0 = dp1;
            dp1 = ans;
        }
        return dp1;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/bbt-counter4914/1)