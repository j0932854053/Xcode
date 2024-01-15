

11. Container With Most Water

Medium

You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store.

Notice that you may not slant the container.


![圖片1](https://s3-lc-upload.s3.amazonaws.com/uploads/2018/07/17/question_11.jpg "Container")


Example 1:
```
Input: height = [1,8,6,2,5,4,8,3,7]

Output: 49

Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.
``` 
Example 2:
``` 
Input: height = [1,1]

Output: 1
```  


**Constraints:**
- $$ n = \text{height.length} $$
- $$ 2 \leq n \leq 10^5 $$
- $$ 0 \leq \text{height}[i] \leq 10^4 $$
- 


__________________________________________________________
解題思路：

這題題目要我們做的是，在一個陣列裡取出兩個元素後，找出兩個元素相乘後的最大面積，使用的是雙指標算法。

> -   我們思考一下，算出容器的面積會需要的是高度和寬度
> -   設定高度，取用於陣列裡各個元素的值
> -   另一方面制定兩個指標，分別為  `left`  和  `right`，是要來代表容器的寬度
> -   並將 `left = 0` 作為寬度的起始點 (指標一)
> -   另外把  `right = height.length - 1`  作為寬度的結束點 (指標二)
> -   然後運用 while 遍歷陣列，來找出最大的容器
> -   如果  `left`  比  `right`  矮的時候，代表需要找到下一個比較高的容器高度，要  `left++`
> -   如果  `right`  比  `left`  矮的時候，代表需要找到前一個比較高的容器高度，要  `left--`
> -   如果  `right`  等於  `left`  的時候，代表前後一起作用把容器縮小，要  `right++`  和  `left--`

[補充] 從矮牆開始取得，是因為裝水的時候基準會落在矮牆，超過矮牆的話水會溢出來，思考一下如果一個容器一邊高一邊低，水最多可以裝到哪? 當然最多只能裝到矮牆的最頂端，高牆就並不太重要了，取決於還是矮牆。


參考網站：https://ithelp.ithome.com.tw/articles/10312733





