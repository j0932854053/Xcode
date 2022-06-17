//
//  main.c
//  MyStrcmp
//
//  Created by 龔星宇 on 2022/5/23.
//

#include <stdio.h>
#include <string.h>
int ownstrcmp(char a[], char b[])
{
    int i = 0;
    while( a[i] == b[i] ){
        if( a[i] == '\0' ){
            return 0;
        }
        i++;
    }
    return  ( a[i] < b[i]) ? 1 : -1;
    
}

int main() {
    char a_str[5]="abcd";
    char b_str[6]="abcde";
    int q;
    q = ownstrcmp(a_str, b_str);
    printf("yes:%d\n",q);

    
}
