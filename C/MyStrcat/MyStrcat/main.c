//
//  main.c
//  MyStrcat
//
//  Created by 龔星宇 on 2022/5/29.
//

#include <stdio.h>
#include <assert.h>

char  *mystrcat(char *dest, const char *src){
    
    assert(dest&&src);
    char *ret = dest;
    while(*dest!='\0'){
        dest++;
    }
    while (*dest++ = *src++);
    
    return ret;
}



int main(int argc, const char * argv[]) {
    
    char str1[] = "abc";
    char str2[] = "123";
    mystrcat(str1, str2);
    printf("%s",str1);
    
    printf("\n");
    return 0;
}
