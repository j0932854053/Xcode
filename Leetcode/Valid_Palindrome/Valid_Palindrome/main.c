//
//  main.c
//  Valid_Palindrome
//
//  Created by 龔星宇 on 2022/6/14.
//

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int getIndex(char s){
    int ret = 0;
    if (s>='a' && s<='z') {
        ret =  s - 'a';
    }
    if (s>='A' && s<='Z') {
        ret =  s - 'A';
    }
    if (s>='0' && s<='9') {
        ret =  s - '0' + 26;
    }
    
    return ret;
}

bool isPalindrome(char * s){
    
    int len = (int) strlen(s);
    //printf("len: %d \n",len);
    int l = 0;
    int r = len-1;
    
    while (r>=l) {
        while (l <= r && !(s[l] >= '0' && s[l] <= '9') && !(s[l] >= 'a' && s[l] <= 'z') && !(s[l] >= 'A' && s[l] <= 'Z')) {
            l++;
        }
        while (l <= r && !(s[r] >= '0' && s[r] <= '9') && !(s[r] >= 'a' && s[r] <= 'z') && !(s[r] >= 'A' && s[r] <= 'Z')) {
            r--;
        }
        
        if (l > r) {
            break;
        }
        
        if (getIndex(s[l]) != getIndex(s[r])) {
            
            return false;
                
        }
        l++;
        r--;
    }
    
    
    
    return true;

}

int main(int argc, const char * argv[]) {
    
    char s[] = "A man, a plan, a canal: Panama";
    //char s[] = "a!@a";
    //printf("s: %lu \n",sizeof(s)/sizeof(s[0]));
    bool ans = isPalindrome(s);
    
    if (ans) {
        printf("true \n");
    }else{
        printf("false \n");
    }
    
    printf("\n");
    return 0;
}
