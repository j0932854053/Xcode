
62.Unique Paths

There is a robot on an m x n grid. The robot is initially located at the top-left corner (i.e., grid[0][0]). The robot tries to move to the bottom-right corner (i.e., grid[m - 1][n - 1]). The robot can only move either down or right at any point in time.

Given the two integers m and n, return the number of possible unique paths that the robot can take to reach the bottom-right corner.

The test cases are generated so that the answer will be less than or equal to 2 * 109.

 

Example 1:

``` 
Input: m = 3, n = 7
Output: 28
``` 
Example 2:
``` 
Input: m = 3, n = 2
Output: 3

Explanation: From the top-left corner, there are a total of 3 ways to reach the bottom-right corner:
1. Right -> Down -> Down
2. Down -> Down -> Right
3. Down -> Right -> Down
 ``` 

Constraints:
``` 
1 <= m, n <= 100

``` 


__________________________________________________________
我一開使用的方法是組合樹的概念 如下參考網站2 但會牽涉到int大小的問題 


如果我们仔细的看这个问题背后的数学模型，其实就是机器人总共走m+n-2步，其中m-1步往下走，n-1步往右走，本质上就是一个组合问题，也就是从m+n-2个不同元素中每次取出m-1个元素的组合数。根据 组合 的计算公式，我们可以写代码来求解即可。代码如下

上面的代码求解了组合的结果，只需要做一次行或者列的扫描，所以时间复杂度是O(min(m,n))，而空间复杂度是O(1)。比起上面的两种解法更优。不过这里有个弊端，就是如果代码中的dom和dedom如果不是double，而是用int，那么会很容易越界，因为这是一个阶乘，所以大家在面试中讨论这种方法要注意和提及越界的问题。



 
參考網站1：https://www.jiuzhang.com/solution/unique-paths/

參考網站2：https://blog.csdn.net/linhuanmars/article/details/22126357

參考網站3：https://www.cnblogs.com/grandyang/p/4353555.html
