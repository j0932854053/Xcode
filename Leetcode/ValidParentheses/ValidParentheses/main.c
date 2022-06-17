//
//  main.c
//  ValidParentheses
//
//  Created by 龔星宇 on 2022/4/15.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


bool isValid(char * s){
    char stack[10000] = {0};
    int i, top = 0;
    
    for (i = 0; i < strlen(s); i++) {
        if ((s[i] == '(') || (s[i] == '{') || (s[i] == '[')) {
            stack[top] = s[i];
            top++;
        } else {
            if (top==0) {
                return false;
            }
            if (((s[i] == ')') && (stack[top - 1] == '(')) ||
                ((s[i] == ']') && (stack[top - 1] == '[')) ||
                ((s[i] == '}') && (stack[top - 1] == '{'))) {
                top--;
            }
            else{
                return false;
            }
        }
    }
    if (top!=0) {
        return false;
    }
    else{
        return true;
    }
}


int main(int argc, const char * argv[]) {
    // insert code here...
    char a[] = "{{}[]}";
    printf("%d\n",isValid(a));
    printf("Hello, World!\n");
    //return 0;
}
