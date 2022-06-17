//
//  main.c
//  Product_of_Array_Except_Self
//
//  Created by 龔星宇 on 2022/6/3.
//

#include <stdio.h>
#include <stdlib.h>

int* productExceptSelf(int* nums, int numsSize, int* returnSize){

    int prefix = 1;
    int postfix = 1;
    //*returnSize = numsSize;
    
    int *ret = (int* ) malloc(sizeof(int)*numsSize);
    ret[0] = 1;
    for (int i = 1; i<numsSize; i++) {
        prefix = prefix * nums[i-1];
        ret[i] = prefix ;
    }
    for (int i = numsSize-2; i>=0; i--) {
        postfix = postfix * nums[i+1];
        ret[i] = ret[i] * postfix;
    }
    
    
    return ret;
}
 
int main(int argc, const char * argv[]) {
    
    int arr[] = {1,2,3,4};
    int len = sizeof(arr)/sizeof(arr[0]);
    int *ans;
    int *returnsize = {0};
    
    printf("list = ");
    for (int i = 0; i<len; i++) {
        printf("%d ",arr[i]);
    }
    ans = productExceptSelf(arr, len, returnsize);
    printf("\n");
    printf("ans  = ");
    for (int i = 0; i<len; i++) {
        printf("%d ",ans[i]);
    }
    free(ans);
    printf("\n");
    
    return 0;
}
