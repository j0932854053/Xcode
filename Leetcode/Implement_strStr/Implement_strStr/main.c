//
//  main.c
//  Implement_strStr
//
//  Created by 龔星宇 on 2022/6/9.
//

#include <stdio.h>
#include <string.h>

int strStr(char * haystack, char * needle){
    unsigned long lh,ln;
    //int ret = 0;
    lh = strlen(haystack);
    ln = strlen(needle);
    
    if ((lh&&ln)==0 || ln == 0) {
        return 0;
    }
    
    for (int i = 0; i<=(lh-ln); i++) {
        if (haystack[i]==needle[0]) {
            int count = 0;
            for (int j = 0; j<ln; j++) {
                if (haystack[i+j]==needle[j]) {
                    count++;
                }
                
            }
            if (count==ln) {
                return i;
            }
        }
    }
    
    return -1;
}


int main(int argc, const char * argv[]) {
    
    char c1[] = "hello";
    char c2[] = "ll";
    int ans;
    ans = strStr(c1, c2);
    printf("First occurrence of needle in haystack index is : %d ",ans);
    
    printf("\n");
    return 0;
}
