//
//  main.c
//  Valid_Anagram
//
//  Created by 龔星宇 on 2022/6/15.
//

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isAnagram(char * s, char * t){

    int s_len = (int) strlen(s);
    int t_len = (int) strlen(t);
    int counter = t_len;
    
    if (s_len!=t_len) {
        return false;
    }
    
    for (int i1 = 0; i1<t_len; i1++) {
        if (s[0]==t[i1]) {
            int temp1 = t[i1];
            t[i1] = t[t_len-1];
            t[t_len-1] = temp1;
        }
    }
        
    for (int i = 0; i<s_len; i++) {
        for (int j = 0; j<counter; j++) {
            if (s[i]==t[j]) {
                int temp = t[j];
                t[j] = t[counter-1];
                t[counter-1] = temp;
                counter--;
                break;
                
            }
            if (j==counter-1) {
                return false;
            }
        }
        
    }
    
    
    return true;
}

int main(int argc, const char * argv[]) {
    
    char s[] = "rat";
    char t[] = "car";
    
    
    bool ans = isAnagram(s, t);
    
    if (ans) {
        printf("true");
    }else{
        printf("false");
    }
    
    printf("\n");
    return 0;
}
