# New Document

模擬實現strcpy

strcpy()為什麼返回指標?
char *strcpy(char *strDest, const char *strSrc)
這個返回值的目的是可以使strcpy用在鏈式表示式中，增加靈活性。
如：len=strlen(strcpy(s2,s1+1)); 


參考來源：https://www.796t.com/article.php?id=183854

strcpy是一種C語言的標準庫函式。strcpy是string copy 字串複製的縮寫。
char *strcpy(char *strDest, const char *strSrc)簡單的理解：源字串strSrc的內容複製給目標字串strDest。
更詳細的：strcpy把從strSrc地址開始且含有’\0’結束符的字串複製到以strDest開始的地址空間，返回值的型別為char*。其原始碼如下：
```c
＃include <assert.h>
char *strcpy(char *strDest, const char *strSrc){
    assert((strDest!=NULL) && (strSrc !=NULL)); 
    char *address = strDest;      
    while( (*strDest++ = *strSrc++) != '\0' ) ; 
    return address ;     
}

```
程式碼分析：
源字串引數用const修飾，防止源字串被修改；
assert()是斷言巨集，作用是如果它的條件返回錯誤，則終止程式執行。也就是說strcpy傳入的引數地址不允許是NULL。
address地址用於記錄複製串的首地址。
while( (*strDest++ = *strSrc++) != '\0' ) ; 是字串複製過程， 到 '\0' 終止。




asser用法
```c

＃include "assert.h" 
void assert( int expression );

----------------------------------------------------
if(假设成立)
{
     程序正常运行；
}
else
{
      报错&&终止程序！（避免由程序运行引起更大的错误）  
}
```
