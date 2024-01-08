//
//  main.c
//  Container_With_Most_Water
//
//  Created by 龔星宇 on 2024/1/8.
//

#include <stdio.h>
#define my_max(a, b) (((a) > (b)) ? (a) : (b))
#define my_min(a, b) (((a) < (b)) ? (a) : (b))

int maxArea(int* height, int heightSize) {
    int maxarea = 0;
    int l = 0;
    int r = heightSize - 1;
    while (l<r) {
        maxarea = my_max(maxarea, my_min(height[l], height[r])*(r-l));
        if(height[l]<height[r]){
            l++;
        }else{
            r--;
        }
    }
    
    
    return maxarea;
}


int main(int argc, const char * argv[]) {
    printf("init\n");
    int height[] = {1,8,6,2,5,4,8,3,7};
//    int height[] = {1,1};
    int heightSize = sizeof(height)/sizeof(height[0]);
    int result = maxArea(height, heightSize);
    
    printf("Max area is : %d \n", result);
    
    return 0;
}
