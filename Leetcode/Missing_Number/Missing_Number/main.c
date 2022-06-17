//
//  main.c
//  Missing_Number
//
//  Created by 龔星宇 on 2022/6/2.
//

#include <stdio.h>



int missingNumber(int* nums, int numsSize){

    int ret;
    int amount = (1+numsSize)*numsSize/2;
    for (int i = 0; i<numsSize; i++) {
        amount = amount-nums[i];
        
    }
    ret = amount;
    
    return ret;
}



int main(int argc, const char * argv[]) {
    
    int ans;
    int num[] = {9,6,4,2,3,5,7,0,1};
    
    ans = missingNumber(num, 9);
    printf("ans:%d\n",ans);
    
    printf("\n");
    return 0;
}
