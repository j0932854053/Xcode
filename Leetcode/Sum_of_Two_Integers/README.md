# New Document

371. Sum of Two Integers

Given two integers a and b, return the sum of the two integers without using the operators + and -.

 

Example 1:
```
Input: a = 1, b = 2
Output: 3
Example 2:
```
```
Input: a = 2, b = 3
Output: 5
```

Constraints:
```
-1000 <= a, b <= 1000
```
＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿
下面這種寫法也可以 但leetcode的編譯器過不了 看參考網站解釋
```
#include <stdio.h>
int getSum(int a, int b) {
        while (b) {
            int carry = (a & b & 0x7fffffff) << 1;
            a = a ^ b;
            b = carry;
        }
        return a;
    }

int main(int argc, const char * argv[]) {
    int a1 = -10;
    int a2 = -5;
    int ans;
    ans = getSum(a1, a2);
    
    printf("a1 + a2 = %d\n",ans);
    return 0;
}

```

參考網站：https://www.cnblogs.com/grandyang/p/5631814.html

參考網站：https://home.gamer.com.tw/artwork.php?sn=5222910
