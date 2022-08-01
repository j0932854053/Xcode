
283.Move Zeroes
Easy

Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

 

Example 1:
```  
Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
```  
Example 2:
```  
Input: nums = [0]
Output: [0]
```  

Constraints:
```  
1 <= nums.length <= 104
-231 <= nums[i] <= 231 - 1
```   

Follow up: Could you minimize the total number of operations done?
```  



__________________________________________________________
解題思路：
需求是將把所有 0 都放在 Array 最後

用一個 pointer 去記錄可以 swap 的第一個 0
若遇到元素 nums[i] 不為 0 時
判斷 pointer 及 i 是不是一樣
如果 一樣 ，就不需要 swap (沒有自己在跟自己交換的)
如果 不一樣，就需要 swap，把現在這個 int 跟 pointer上記住的 0 交換
pointer++ ，再找尋下一個需要交換的 0

參考網站：https://ithelp.ithome.com.tw/articles/10221042

