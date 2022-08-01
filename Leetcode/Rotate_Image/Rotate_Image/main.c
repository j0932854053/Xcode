//
//  main.c
//  Rotate_Image
//
//  Created by 龔星宇 on 2022/8/2.
//

#include <stdio.h>

void swap(int *i,int *j){
    int temp = *i;
    *i = *j;
    *j = temp;
}

void rotate(int** matrix, int matrixSize, int* matrixColSize){

    if (matrixSize == 1) return;
        //先轉置
        for(int i = 0;i<matrixSize;i++){
            for(int j = i;j<matrixSize;j++){
                swap(&matrix[i][j],&matrix[j][i]);
            }
        }
        //每一行前後對調
        for (int i = 0;i<matrixSize;++i){
            int l = 0;
            int r = matrixSize-1;
            while(l < r){
                swap(&matrix[i][l],&matrix[i][r]);
                l++;
                r--;
            }
        }

   
}



int main(int argc, const char * argv[]) {
    int matrix[][4] = {{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}};
    int* ptr[4];
    ptr[0] = &matrix[0][0];
    ptr[1] = &matrix[1][0];
    ptr[2] = &matrix[2][0];
    ptr[3] = &matrix[3][0];
    
    int matrixColSize = 4;
    rotate(ptr, 4, &matrixColSize);
    
    for (int i = 0; i<4; i++) {
        for (int j = 0; j<4; j++) {
            printf("%-3d ",matrix[i][j]);
        }
        printf("\n");
    }
    
    printf("\nHello, World!\n");
    return 0;
}
