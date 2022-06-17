//
//  main.c
//  MyStrcpy
//
//  Created by 龔星宇 on 2022/5/28.
//

#include <stdio.h>
#include <assert.h>

char *mystrcpy(char *dest, const char *src){
    //如果傳入的參數address是NULL 則終止程式
    assert((dest!=NULL) && (src !=NULL));
    char *result = dest;
    while ((*dest++ = *src++));
    
    return result;
}



int main(int argc, const char * argv[]) {
    
    char a[] = "this is copy!";
    char a_copy[]="qwea12312313";
    mystrcpy(a_copy,a);
    printf("Copy a to a_copy:%s",a_copy);
    
    printf("\n");
    return 0;
}
