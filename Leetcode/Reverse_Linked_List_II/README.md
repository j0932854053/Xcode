92.Reverse Linked List II
Medium

Given the head of a singly linked list and two integers left and right where left <= right, reverse the nodes of the list from position left to position right, and return the reversed list.

 

Example 1:

``` 
Input: head = [1,2,3,4,5], left = 2, right = 4
Output: [1,4,3,2,5]
``` 
Example 2:
``` 
Input: head = [5], left = 1, right = 1
Output: [5]
``` 

Constraints:
``` 
The number of nodes in the list is n.
1 <= n <= 500
-500 <= Node.val <= 500
1 <= left <= right <= n
``` 
``` 
Follow up: Could you do it in one pass?
```  



__________________________________________________________
解題思路：
此處撰寫解題思路
因為頭節點有可能發生變化，使用虛擬頭節點可以避免複雜的分類討論；
從 1 到 left , pre 節點往後移動；
pre和cur節點不變

![GITHUB]( https://pic.leetcode-cn.com/1636107020-JPJRBs-image.png "1")


剛開始的指標

![GITHUB]( https://pic.leetcode-cn.com/1636118966-HyhSVf-image.png "2")


cur -> next = next -> next;

![GITHUB]( https://pic.leetcode-cn.com/1636119450-DNNxxA-image.png "3")


next -> next = pre -> next;

![GITHUB]( https://pic.leetcode-cn.com/1636119470-glrmrQ-image.png "4")


pre -> next = next;

![GITHUB]( https://pic.leetcode-cn.com/1636119555-igGELm-image.png "5")

至此，完成一次

參考網站：https://leetcode.cn/problems/reverse-linked-list-ii/solution/fan-zhuan-lian-biao-ii-by-leetcode-solut-teyq/

參考網站：https://leetcode.cn/problems/reverse-linked-list-ii/solution/leetcode92-fan-zhuan-lian-biao-ii-by-yin-zcfc/

