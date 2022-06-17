//
//  main.c
//  Plus_One
//
//  Created by 龔星宇 on 2022/6/9.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int* plusOne(int* digits, int digitsSize, int* returnSize){
    
    *returnSize = digitsSize ;
    for (int i = digitsSize-1; i>=0; i--) {
        if (digits[i]<9) {
            digits[i]++;
            return digits;
            
        }else{
            digits[i] = 0;
        }
    }
    
    if (digits[0]==0) {
        *returnSize = digitsSize + 1;
        int* ret = (int* ) malloc(sizeof(int)*(digitsSize+1));
        ret[0]=1;
        for (int i = 0; i<digitsSize; i++) {
            ret[i+1] = digits[i];
        }
        
        return ret;
    }
    
    return 0;
}

int main(int argc, const char * argv[]) {
    
    int digits_list[4] = {9,8,7,9};
    int ret_temp = 0;
    
    int* ans = plusOne(digits_list, 4, &ret_temp);
    
    
    for (int i = 0; i<ret_temp; i++) {
        printf("%d ",ans[i]);
    }
    
    printf("\n");
    
    
    //free(ans);
    return 0;
}
