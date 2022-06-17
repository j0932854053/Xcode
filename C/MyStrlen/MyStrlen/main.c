//
//  main.c
//  MyStrlen
//
//  Created by 龔星宇 on 2022/5/29.
//

#include <stdio.h>
#include <assert.h>
int mystrlen(const char *src){
    assert(src);
    int ret = 0;
    
    while ((*src++)!='\0') {
        ret++;
    }
    return ret;
}


int main(int argc, const char * argv[]) {
    char str1[] = "1234";
    int len = 0;
    len = mystrlen(str1);
    printf("string length is : %d",len);
    
    printf("\n");
    return 0;
}
