//
//  main.c
//  Contains_Duplicate
//
//  Created by 龔星宇 on 2022/6/15.
//

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int cmp(const void * a, const void* b){
    
    return (*(int*)a - *(int*)b);
}

bool containsDuplicate(int* nums, int numsSize){

    if (numsSize==1) {
        return false;
    }
    
    qsort(nums, numsSize, sizeof(int), cmp);
    
    for (int i = 0; i<numsSize-1; i++) {
        if (nums[i]==nums[i+1]) {
            return true;
        }
    }
    
    return false;
}



int main(int argc, const char * argv[]) {
    
    int nums[] = {1,2,3,1};
    int numsSize = sizeof(nums)/sizeof(nums[0]);
    
    bool ans = containsDuplicate(nums, numsSize);
    
    if (ans) {
        printf("true");
    }else{
        printf("false");
    }
    
    printf("\n");
    return 0;
}
