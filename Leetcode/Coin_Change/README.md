
322.Coin Change

Medium


You are given an integer array coins representing coins of different denominations and an integer amount representing a total amount of money.

Return the fewest number of coins that you need to make up that amount. If that amount of money cannot be made up by any combination of the coins, return -1.

You may assume that you have an infinite number of each kind of coin.

 

Example 1:
``` 
Input: coins = [1,2,5], amount = 11
Output: 3
Explanation: 11 = 5 + 5 + 1
``` 
Example 2:
``` 
Input: coins = [2], amount = 3
Output: -1
``` 
Example 3:
``` 
Input: coins = [1], amount = 0
Output: 0
``` 

Constraints:
``` 
1 <= coins.length <= 12
1 <= coins[i] <= 231 - 1
0 <= amount <= 104

``` 


__________________________________________________________
原本想法是用greedy 但實作完test case發現像是下面這種狀況會出問題
```c 
int coins[] = {186,419,83,408};
int amount = 6249;
``` 
 
參考網站：https://medium.com/@ryanyang1221/leetcode-challenge-coin-change-2-6-7-70d9f1c3c06d

參考網站：https://hackmd.io/@lilybon/leetcode-322
