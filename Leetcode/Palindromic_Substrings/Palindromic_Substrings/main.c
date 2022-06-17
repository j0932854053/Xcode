//
//  main.c
//  Palindromic_Substrings
//
//  Created by 龔星宇 on 2022/6/18.
//

#include <stdio.h>
#include <string.h>

int fac(int n){
    int ret = 1;
    for (int i = 1; i<=n; i++) {
        ret = ret*i;
    }
    return ret;
}

int countSubstrings(char * s){

    
    int ret = 0;
    int len = (int) strlen(s);
    //int c_cur = 0;
    if (len<=1) {
        return len;
    }
    
    for (int i = 0; i<len; i++) {
        int c_same = 0;
        int j = i;
        while ((i<len-1) && s[j]==s[j+1]) {
            j++;
            c_same++;
        }
        
        if (c_same) {
            ret = ret + fac(c_same+1);
        }
        i = i + j;
        
        
        
        
    }
    //ret = ret + 1;  // index轉實際數量
    
    return ret;
}



int main(int argc, const char * argv[]) {
    
    char s[] = "aaabaaa";
    int ans = countSubstrings(s);
    printf("%d \n",ans);
    
    
    printf("\n");
    return 0;
}
