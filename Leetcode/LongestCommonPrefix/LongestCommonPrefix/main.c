//
//  main.c
//  LongestCommonPrefix
//
//  Created by 龔星宇 on 2022/4/14.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_STRINGS 3

char * longestCommonPrefix(char ** strs, int strsSize){
    //char *temp = calloc(1,strlen(strs[0]));
    
    if (strsSize == 0) {
        return "";
    }
    if (strsSize == 1) {
        return strs[0];
    }
    
    for (int j = 0; j < strlen(strs[0]); j++) {
        for (int i = 0; i < strsSize; i++) {
            
            if (strs[0][j] == strs[i][j]) {
            }
            else{
                strs[0][j] = '\0';
                return strs[0];
            }
            if(strs[0][0] != strs[i][0]){
                strs[0][0] = '\0';
                return strs[0];
                
            }
        }

    }

    return strs[0];
}
//up function block is right

int main(int argc, const char * argv[]) {
    
    char *strtest[201] = {"qwe","qweasd","qwarty"};
    
    char *p;
//    char **a ;
//    a = strtest;
    p = longestCommonPrefix(strtest, NUM_STRINGS);

    //printf("%s\n ", p);
    printf("123");
    return 0;
}
