
70.Climbing Stairs

Easy


You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

 

Example 1:
``` 
Input: n = 2
Output: 2
Explanation: There are two ways to climb to the top.
1.1 step + 1 step
2.2 steps
``` 
Example 2:
``` 
Input: n = 3
Output: 3

Explanation: There are three ways to climb to the top.
1.1 step + 1 step + 1 step
2.1 step + 2 steps
3.2 steps + 1 step
``` 

Constraints:
``` 
1 <= n <= 45

``` 


__________________________________________________________

我們考慮要爬n階的話，首先要先爬到n-1階或n-2階，
因為只有一次走1階或一次走2階的選擇。
也就是說，走到n階的方法，就相當於走到n-1階的方法和走到n-2階的方法和。
因為最後的步伐已經固定了，
我們同時還可以保證這兩個方法的組合之間不會互相重複
(一個最後走1步，一個最後走2步)。
 
參考網站：https://ithelp.ithome.com.tw/articles/10213272
