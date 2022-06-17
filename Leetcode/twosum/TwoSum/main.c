//
//  main.c
//  twosum
//
//  Created by 龔星宇 on 2022/4/13.
//

#include <stdio.h>
#include <stdlib.h>


int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    * returnSize = 2;
    int *ans = (int*) malloc(2*sizeof(int));
    ;for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                ans[0] = i;
                ans[1] = j;
            }
        }
    }
    
    //free(ans);
    return ans;
}




int main(int argc, const char * argv[]) {
    int a[] = {2,7,11,15};
    
    int target = 18;
    int returnSize1;
    int *p = NULL;
    p = twoSum(a,sizeof(a)/sizeof(a[0]),target,&returnSize1);
    
    printf("[%d %d]\n",p[0],p[1]);
    //return 0;
}
