41.First Missing Positive

Hard

Given an unsorted integer array nums, return the smallest missing positive integer.

You must implement an algorithm that runs in O(n) time and uses constant extra space.

 

Example 1:
``` 
Input: nums = [1,2,0]
Output: 3
``` 
Example 2:
``` 
Input: nums = [3,4,-1,1]
Output: 2
``` 
Example 3:
``` 
Input: nums = [7,8,9,11,12]
Output: 1
``` 

Constraints:
``` 
1 <= nums.length <= 5 * 105
-231 <= nums[i] <= 231 - 1
```  



__________________________________________________________
解題思路：

1、正常數據的話，數組元素值應該是[1,2,3,4,5]連續的數，異常情況為[1,2,4,5]

2、正常數據我們認為0下標應該存放1，1下標存放2...

3、遍歷數組，找到 1<=元素<=數組長度的元素，如5，將他放到應該放置的位置，即4號索引

4、遇到範圍之外的數值，如-1 或者超過數組長度的值，不交換，繼續下一個

5、處理之後的數據為[1,2,4,5]，再遍歷一遍數組，下標+1應該是正確值，找出第一個不符合的即可


看留言區有一個江楠大盗
參考網站：https://leetcode.cn/problems/first-missing-positive/solution/tong-pai-xu-python-dai-ma-by-liweiwei1419/



參考網站：https://leetcode.cn/problems/first-missing-positive/solution/lei-si-ji-shu-pai-xu-by-qii404/
