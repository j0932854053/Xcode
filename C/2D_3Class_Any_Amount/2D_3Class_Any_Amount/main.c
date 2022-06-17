//
//  main.c
//  2D_3Class_Any_Amount
//
//  Created by 龔星宇 on 2022/5/27.
//

#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char * argv[]) {
    
    int *a[3];
   
    printf("input 3 class amount\n");
    
    
    a[0] = (int*) malloc(sizeof(int)*1);
    a[1] = (int*) malloc(sizeof(int)*2);
    a[2] = (int*) malloc(sizeof(int)*3);
    
    a[0][0]=10;
    a[1][0]=20;
    a[1][1]=30;
    a[2][0]=40;
    a[2][1]=50;
    a[2][2]=60;
    
    for (int i = 0; i<3; i++) {
        for (int j = 0; j<3; j++) {
            printf("size of a[%d][%d]:%d\n",i,j,a[i][j]);
        }
        
    }
   
    printf("\n");
    for(int i=0;i<3;i++){
        free(a[i]);
    }
  
    return 0;
}
