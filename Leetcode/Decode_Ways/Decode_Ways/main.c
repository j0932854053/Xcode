//
//  main.c
//  Decode_Ways
//
//  Created by 龔星宇 on 2022/6/13.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int numDecodings(char * s){

    int len = (int) strlen(s);
    int* ret = (int*) malloc(sizeof(int*)*(len+1));
    
    if (s[0]=='0'|| len == 0 ) {
        return 0;
    }
    ret[0] = 1;
    
    for (int i = 1; i<len+1; i++) {
        
        ret[i] = (s[i-1]=='0') ? 0 : ret[i-1];
        
        if ((i>1) && ((s[i-2]=='1') || (s[i-2]=='2' && s[i-1]<='6'))) {
            ret[i] = ret[i] + ret[i-2];
        }

    }
    
    
    return ret[len];
}

int main(int argc, const char * argv[]) {
    char *str = "16";
    
    int ans = numDecodings(str);
    printf("%d",ans);
    
    printf("\n");
    return 0;
}
