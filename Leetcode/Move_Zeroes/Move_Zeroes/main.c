//
//  main.c
//  Move_Zeroes
//
//  Created by 龔星宇 on 2022/8/2.
//

#include <stdio.h>


void moveZeroes(int* nums, int numsSize){

    int ptr = 0;
    for (int i = 0; i < numsSize; i++){
        if (nums[i] != 0){
            if (ptr != i){
                nums[ptr] = nums[i];
                nums[i] = 0;
            }
            ptr++;
        }
    }
}


int main(int argc, const char * argv[]) {
    
    int nums[] = {0,1,0,3,12};
    int numsSize = sizeof(nums)/sizeof(nums[0]);
    
    moveZeroes(nums, numsSize);
    
    for (int i = 0; i<numsSize; i++) {
        printf("%d ",nums[i]);
    }
    printf("\nHello, World!\n");
    return 0;
}
