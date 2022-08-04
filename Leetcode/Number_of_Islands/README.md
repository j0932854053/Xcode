
200.Number of Islands

Medium

Given an m x n 2D binary grid grid which represents a map of '1's (land) and '0's (water), return the number of islands.

An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically. You may assume all four edges of the grid are all surrounded by water.

 

Example 1:
``` 
Input: grid = [
  ["1","1","1","1","0"],
  ["1","1","0","1","0"],
  ["1","1","0","0","0"],
  ["0","0","0","0","0"]
]
Output: 1
``` 
Example 2:
``` 
Input: grid = [
  ["1","1","0","0","0"],
  ["1","1","0","0","0"],
  ["0","0","1","0","0"],
  ["0","0","0","1","1"]
]

Output: 3
```  

Constraints:
``` 
m == grid.length
n == grid[i].length
1 <= m, n <= 300
grid[i][j] is '0' or '1'.
```  



__________________________________________________________
解題思路：

一個島嶼是數值為 1 的一個集合，這個集合包括了前後左右為 1 的島嶼，是相連的
那麼這就好辦了，我們遍歷整個數組，當遇見 1時，說明第一個島嶼被找到，我們島嶼數+1
然後我們遍歷這個島嶼，看看是否有相鄰島嶼，並且將這些島嶼都至 0 ，因為我們找到第一個就將其記錄了，之後就不在需要了
這樣子出現一個島嶼，我們就將本身和相鄰島嶼都至 0 ，再接著遍歷數組，當再出現 1 時，說明出現了新的島嶼，再將島嶼數+1,將當前島嶼和相鄰島嶼至 0 ，最後得到島嶼數


參考網站：https://leetcode.cn/problems/number-of-islands/solution/chun-c-by-xun-ge-v-0i2m/

