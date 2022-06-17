//
//  main.c
//  MyStrstr
//
//  Created by 龔星宇 on 2022/5/28.
//

#include <stdio.h>
#include <string.h>
char *mystrstr(char *str1,char *str2){
    char *s1 = str1;
    char *s2 = str2;
    char *current = str1;
    
    
    while (*current) {
        s1 = current;
        s2 = str2;
        while (*s1==*s2) {
            s1++;
            s2++;
            //字串2搜尋完畢
            if (*s2=='\0') {
                return current;
            }
            //字串1搜尋完畢
            if (*s1=='\0') {
                return NULL;
            }
            
        }
        //將字串1的搜尋位置向後位移
        current++;
        
    }
    
    return NULL;
}


int main(int argc, const char * argv[]) {
    
    
    char *p = "abaacdefg";
    char *q = "cde";
    char *ans = mystrstr(p, q);
    printf("My method result:%8s\n",ans);
    
    char* ret = strstr(p, q);
    printf("Use function result:%s\n", ret);
    printf("\n");
    return 0;
}
