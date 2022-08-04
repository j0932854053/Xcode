
144.Binary Tree Preorder Traversal

Easy

Given the root of a binary tree, return the preorder traversal of its nodes' values.

 

Example 1:

```
Input: root = [1,null,2,3]
Output: [1,2,3]
```
Example 2:
```
Input: root = []
Output: []
```
Example 3:
```
Input: root = [1]
Output: [1]
```

Constraints:
```
The number of nodes in the tree is in the range [0, 100].
-100 <= Node.val <= 100
 
```
```
Follow up: Recursive solution is trivial, could you do it iteratively?
```  



__________________________________________________________
解題思路：

迭代解法
時間複雜度：O(n)，其中 nn 是二叉樹的節點數。每一個節點恰好被遍歷一次。

空間複雜度：O(n)，為迭代過程中顯式棧的開銷，平均情況下為O(logn)，最壞情況下樹呈現鏈狀，為 O(n)。


參考網站：https://leetcode.cn/problems/binary-tree-preorder-traversal/solution/er-cha-shu-de-qian-xu-bian-li-by-leetcode-solution/

遞迴解法

時間複雜度：O(n)，其中 n 是二元樹的節點數。每一個節點恰好被遍歷一次。

空間複雜度：O(n)，為遞迴過程中棧的開銷，平均情況下為O(logn)，最壞情況下樹呈現鏈狀，為 O(n)。
參考網站：https://leetcode.cn/problems/binary-tree-preorder-traversal/solution/er-cha-shu-de-qian-xu-bian-li-by-goodgoo-1yo1/


