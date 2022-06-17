//
//  main.c
//  Counting_Bits
//
//  Created by 龔星宇 on 2022/6/2.
//

#include <stdio.h>
#include <stdlib.h>

int* countBits(int n, int* returnSize){
    
    *returnSize = n+1;
    int *ret = (int* ) malloc(*returnSize*sizeof(int));
    
    for (int i = 0; i<=n; i++) {
        int count = 0;
        int result = i;
        while (result) {
            
            count = count + (result&0x00000001);
            result = result>>1;
        }
        
        ret[i] = count;
    }
    
    
    
    return ret;
}

int main(int argc, const char * argv[]) {
    int a = 5;
    int b = a+1;
    int *ans;
    int *arry = &b;
    ans = countBits(a, arry);
    
    printf("%d\n",a);
    
    for (int i = 0; i<=a; i++) {
        printf("%d ",ans[i]);
    }
    
    
    printf("\n");
    
    return 0;
}
