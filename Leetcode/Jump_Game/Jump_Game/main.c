//
//  main.c
//  Jump_Game
//
//  Created by 龔星宇 on 2022/6/11.
//

#include <stdio.h>
#include <stdbool.h>

bool canJump(int* nums, int numsSize){

    int maxindex = nums[0]; // 當前能夠跳躍到的最遠位置
    int nextmax = 0;
    int current = 0;    // 當下在的位置
    
    // 最遠位置小於陣列的終點位置時 持續尋找
    while (maxindex<numsSize-1) {
        // 下一步可以跳得最遠距離
        nextmax = maxindex;
        //  循環當下位置可以跳躍的區間中最遠可以跳到哪裡
        for (int i = current+1 ; i<=maxindex; i++) {
            
            nextmax = nextmax > (i + nums[i]) ? nextmax : (i + nums[i]);
        }
        // 如果下一步的最遠位置不能超越當前所能跳躍的最遠位置 直接回傳false
        if (nextmax<=maxindex) {
            return false;
        }
        // 當前位置更新為原本可以跳躍到的最遠位置
        current = maxindex;
        //  最遠位置更新為原本下一步可以到達的最遠位置
        maxindex = nextmax;
    }
    
    
    
    return true;
}



int main(int argc, const char * argv[]) {
    
    int nums[] = {2,5,0,0};
    int len = sizeof(nums)/sizeof(nums[0]);
    bool ans = canJump(nums, len);
    
    if (ans) {
        printf("true");
    }else{
        printf("false");
    }
    
    
    
    printf("\n");
    return 0;
}
