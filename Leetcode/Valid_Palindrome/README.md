
125.Valid Palindrome

Easy


A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.

 

Example 1:
``` 
Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
``` 
Example 2:
``` 
Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.
``` 
Example 3:
``` 
Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.
``` 

Constraints:
``` 
1 <= s.length <= 2 * 105
s consists only of printable ASCII characters.

``` 


__________________________________________________________

因為我不想改動原本的陣列內容 所以用這個方法做

解題方法：

建立2個索引值i和j，分別從字串s的左邊和右邊掃描，找到第1個英文字母或數字則停下，確認是否符合回文定義的比對規則，如果不相同，則並不是回文。當i >= j，代表已經都比對完，則屬於回文。

而判斷是否相同字母或數字，可以用字元的ASCII範圍檢查，並回傳自定義的索引值，比如'A'和'a'回傳0、'0'回傳26(與前面英文字母不同)。

 
參考網站1：https://ithelp.ithome.com.tw/articles/10253088


