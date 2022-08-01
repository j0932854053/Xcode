//
//  main.c
//  Search_a_2D_Matrix_II
//
//  Created by 龔星宇 on 2022/8/2.
//

#include <stdio.h>
#include <stdbool.h>

//horizontal and vertical
bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target){

    int h=matrixSize-1;
    int v=0;
    int d=matrixColSize[0]-1;
    while(h>=0&&d>=v){
        if(target<matrix[h][v]){
            h--;
        }
        else if(target>matrix[h][v]){
            v++;
        }
        else{
            return true;
        }
    }
    return false;

}

int main(int argc, const char * argv[]) {
    
    int matrix[][5] = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    int* ptr[5];
    ptr[0] = &matrix[0][0];
    ptr[1] = &matrix[1][0];
    ptr[2] = &matrix[2][0];
    ptr[3] = &matrix[3][0];
    ptr[4] = &matrix[4][0];
    int matrixColSize = 5;
    
    bool ans = searchMatrix(ptr, 5, &matrixColSize, 100);
    
    if (ans) {
        printf("true");
    }else{
        printf("false");
    }
    
    
    
    
    printf("\nHello, World!\n");
    return 0;
}
