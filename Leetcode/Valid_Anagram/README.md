
242.Valid Anagram

Given two strings s and t, return true if t is an anagram of s, and false otherwise.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

 

Example 1:
``` 
Input: s = "anagram", t = "nagaram"
Output: true
``` 
Example 2:
``` 
Input: s = "rat", t = "car"
Output: false
``` 

Constraints:
``` 
1 <= s.length, t.length <= 5 * 104
s and t consist of lowercase English letters.
 

Follow up: What if the inputs contain Unicode characters? How would you adapt your solution to such a case?
``` 


__________________________________________________________

下面這個解法很厲害 列出陣列統計字串 a~z 的出現的次數

解題方法：
```c
bool isAnagram(char * s, char * t)
{
    int arr[26];
    memset(arr,0,26*sizeof(int));
    if(strlen(s)!=strlen(t))
        return false;
    for(int i=0;i<strlen(s);i++)
    {
        arr[s[i]-'a']++;
    }
    for(int j=0;j<strlen(t);j++)
    {
        if(arr[t[j]-'a']==0)
            return false;
        arr[t[j]-'a']--;
    }
    return true;
}
```
（2.00,4.58） 
參考網站1：https://leetcode.com/submissions/detail/722298053/


