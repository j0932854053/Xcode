//
//  main.c
//  CodeTest
//
//  Created by 龔星宇 on 2022/4/15.
//



#include <stdio.h>
#include <stdlib.h>

int* spiralOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize){

    if(0 == matrixSize)
        {
            *returnSize = 0;
            return NULL;
        }
    
    
    * returnSize = matrixSize * (*matrixColSize);
    int *ret = (int* ) malloc(sizeof(int) * matrixSize * (*matrixColSize));
   
   
    ///*
    int up = 0;
    int down = matrixSize;
    int left = 0;
    int right = (* matrixColSize);
    int counter = 0;
    
    while ((up<down) && (left<right)) {
        if (up<down) {
            for (int i = left; i<right; i++) {
                ret[counter] = matrix[up][i];
                counter++;
            }
            up++;
        }
    
        
        if (left<right) {
            for (int i = up; i<down; i++) {
                ret[counter] = matrix[i][right-1];
                counter++;
            }
            right--;
        }
        
        //這邊counter 15  matrix[1][2]
        if (up<down) {
            for (int i = right-1; i>=left; i--) {
                ret[counter] = matrix[down-1][i];
                counter++;
            }
            down--;
        }
        
        
        if (left<right) {
            for (int i = down-1; i>=up; i--) {
                ret[counter] = matrix[i][left];
                counter++;
            }
            left++;
        }
        
        
    }
    // */
    
    
    
    return ret;
}



int main(int argc, const char * argv[]) {
    
    //int matrix_test[][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int matrix_test[][5] = {{0,1,2,3,4},{10,11,12,13,14},{20,21,22,23,24}};
    //int matrix_test[][2] = {{1,2},{4,5},{7,8}};
    int* ptr[3];
    ptr[0] = &matrix_test[0][0];
    ptr[1] = &matrix_test[1][0];
    ptr[2] = &matrix_test[2][0];
    int matrixColSize_temp = 5;
    int returnSiz_temp;
   
    int* ans = spiralOrder(ptr, 3, &matrixColSize_temp, &returnSiz_temp);
    
   
    
    for (int i = 0; i<returnSiz_temp; i++) {
        printf("%d ",ans[i]);
    }
    
    free(ans);
    printf("\n");
    return 0;
}

