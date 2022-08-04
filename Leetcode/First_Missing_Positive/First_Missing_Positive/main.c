//
//  main.c
//  First_Missing_Positive
//
//  Created by 龔星宇 on 2022/8/4.
//

#include <stdio.h>

int firstMissingPositive(int* nums, int numsSize){

    for (int i = 0; i<numsSize; i++) {
        while (nums[i] >= 1 && nums[i] <= numsSize && (nums[i] != nums[nums[i] - 1])) {
            //把當前元素換到他應該在的位置上
            int temp = nums[i];
            nums[i] = nums[temp - 1];
            nums[temp - 1] = temp;//這邊nums[temp - 1]不能寫成nums[nums[i] - 1] 因為這樣交換不到 nums[i]變新的
            //因為換過來的值也不一定在這個位置上，所以while循環繼續
        }
    }
    
    
    for (int i = 0; i<numsSize; i++) {
        if (nums[i]!=(i+1)) {
            return i+1;
        }
    }
    //如果1～numsSize都在對應到的位置上 那就表示最小的數字是numsSize＋1
    return numsSize+1;
}

int main(int argc, const char * argv[]) {
    
    int nums[] = {3,4,-1,1};
    int numsSize = sizeof(nums)/sizeof(nums[0]);
    
    
    int ans = firstMissingPositive(nums, numsSize);
    
    printf("miss num : %d",ans);
    
    printf("\nHello, World!\n");
    return 0;
}
