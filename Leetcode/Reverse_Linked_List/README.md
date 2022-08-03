
206.Reverse Linked List
Easy

Given the head of a singly linked list, reverse the list, and return the reversed list.

 

Example 1:

```
Input: head = [1,2,3,4,5]
Output: [5,4,3,2,1]
```
Example 2:

```
Input: head = [1,2]
Output: [2,1]
```
Example 3:
```
Input: head = []
Output: []
```
 

Constraints:
```
The number of nodes in the list is the range [0, 5000].
-5000 <= Node.val <= 5000
```
```
Follow up: A linked list can be reversed either iteratively or recursively. Could you implement both?
```  



__________________________________________________________
解題思路：
雙指標解法
定義兩個指針： pre 和 cur ；cur 在前 pre 在後。

每次讓 cur 的 next 指向 pre ，實現一次局部反轉

局部反轉完成之後，cur 和 pre 同時往前移動一個位置

循環上述過程，直至 cur 到達鏈表尾部

參考網站：https://leetcode.cn/problems/reverse-linked-list/solution/fan-zhuan-lian-biao-shuang-zhi-zhen-di-gui-yao-mo-/

遞迴解法
參考網站：https://leetcode.cn/problems/reverse-linked-list/solution/dong-hua-yan-shi-206-fan-zhuan-lian-biao-by-user74/



