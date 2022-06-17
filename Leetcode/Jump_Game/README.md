
55.Jump Game

Medium


You are given an integer array nums. You are initially positioned at the array's first index, and each element in the array represents your maximum jump length at that position.

Return true if you can reach the last index, or false otherwise.

 

Example 1:
``` 
Input: nums = [2,3,1,1,4]
Output: true
``` 
Explanation: Jump 1 step from index 0 to 1, then 3 steps to the last index.
Example 2:
``` 
Input: nums = [3,2,1,0,4]
Output: false
``` 
Explanation: You will always arrive at index 3 no matter what. Its maximum jump length is 0, which makes it impossible to reach the last index.
 

Constraints:
``` 
1 <= nums.length <= 104
0 <= nums[i] <= 105

``` 


__________________________________________________________
我看過最屌的解法
``` c
/* 贪心算法：
* 一次遍历，在遍历过程中，判断基于当前位置的最远距离是否到达最后一个元素，
* 如果到达或者越过，则直接返回真; 否则假。
*/
#define MAX(a, b) ((a) > (b) ? (a) : (b))

bool canJump(int* nums, int numsSize){
    int i;
    int max = 0;
    for (i = 0; i < numsSize; i++) {
        if (i <= max) {
            max = MAX(max, nums[i] + i);
            if (max >= numsSize - 1)
                return true;
        }
    }
    
    return false;
}
``` 
參考網站：https://leetcode.jp/leetcode-55-jump-game-%E8%A7%A3%E9%A2%98%E6%80%9D%E8%B7%AF%E5%88%86%E6%9E%90/


參考網站：https://leetcode.com/submissions/detail/719624152/
