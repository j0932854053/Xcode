
240.Search a 2D Matrix II
Medium

Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:

Integers in each row are sorted in ascending from left to right.
Integers in each column are sorted in ascending from top to bottom.


Example 1:

``` 
Input: matrix = [[1,4,7,11,15],[2,5,8,12,19],[3,6,9,16,22],[10,13,14,17,24],[18,21,23,26,30]], target = 5
Output: true
``` 
Example 2:

``` 
Input: matrix = [[1,4,7,11,15],[2,5,8,12,19],[3,6,9,16,22],[10,13,14,17,24],[18,21,23,26,30]], target = 20
Output: false
``` 

Constraints:
``` 
m == matrix.length
n == matrix[i].length
1 <= n, m <= 300
-109 <= matrix[i][j] <= 109
All the integers in each row are sorted in ascending order.
All the integers in each column are sorted in ascending order.
-109 <= target <= 109
```  



__________________________________________________________
解題思路：
比較巧妙地一個解法
因為每行元素從左到右是升序
每列元素從上到下也是升序
所以從右上角來看整個矩陣
有點類似二元樹
從右上角開始走
目標元素大了往下走
目標元素小了往左走
注意邊界就可以解出題

參考網站：https://leetcode.cn/problems/search-a-2d-matrix-ii/solution/230-by-you-zhi-dong-zuo-plrg/

