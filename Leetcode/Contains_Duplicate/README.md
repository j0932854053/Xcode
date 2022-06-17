
217.Contains Duplicate

Easy

Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

 

Example 1:
```
Input: nums = [1,2,3,1]
Output: true
```
Example 2:
```
Input: nums = [1,2,3,4]
Output: false
```
Example 3:
```
Input: nums = [1,1,1,3,3,4,3,2,4,2]
Output: true
``` 

Constraints:
```
1 <= nums.length <= 105
-109 <= nums[i] <= 109
```


__________________________________________________________

只能用sort的方式處理 不然就是hash



（Ｘ）方法一：暴力解      Time Limit Exceeded 
```c
bool containsDuplicate(int* nums, int numsSize){

    if (numsSize==1) {
        return false;
    }
    
    for (int i = 0; i<numsSize; i++) {
        for (int j = i+1; j<numsSize; j++) {
            if (nums[i]==nums[j]) {
                return true;
            }
        }
    }
    
    
    
    return false;
}
```
 
參考網站1：https://github.com/andy6804tw/LeetCode/blob/master/Algorithms/C/217-Contains-Duplicate.md


