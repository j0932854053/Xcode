//
//  main.c
//  Number_of_Islands
//
//  Created by 龔星宇 on 2022/8/4.
//

#include <stdio.h>

void cleanLand(char** grid, int gridSize, int ColSize,int row,int col)
{
    if(grid[row][col] == '1')
    {
        grid[row][col] = '0';
    }
    else
    {
       
        return ;
    }

    int newrow;
    int newcol;
    
    if(row != 0)    //上
    {
        newrow = row - 1;
        cleanLand(grid,gridSize,ColSize,newrow,col);
    }

    if(row != gridSize - 1)    //下
    {
        newrow = row + 1;
        cleanLand(grid,gridSize,ColSize,newrow,col);
    }


    if(col != 0)        //左
    {
        newcol = col - 1;
        cleanLand(grid,gridSize,ColSize,row,newcol);
    }

    if(col != ColSize-1)  //右
    {
        newcol = col + 1;
        cleanLand(grid,gridSize,ColSize,row,newcol);
    }
    //到最后
}


int numIslands(char** grid, int gridSize, int* gridColSize){

   
    int ret = 0;
    
    for(int row = 0; row < gridSize ; row++){
        for(int col = 0; col < *gridColSize ;col++ ){
            if(grid[row][col] == '1'){
                
                cleanLand(grid, gridSize,* gridColSize,row,col);
                ret++;
            }
        }
    }
    return ret;

    
}

int main(int argc, const char * argv[]) {
    
    char grid[][5] = {{'1','1','0','0','0'},{'1','1','0','0','0'},{'0','0','1','0','0'},{'0','0','0','1','1'}};
    
    char* ptr[4];
    ptr[0] = &grid[0][0];
    ptr[1] = &grid[1][0];
    ptr[2] = &grid[2][0];
    ptr[3] = &grid[3][0];
    int gridColSize = 5;
    int gridSize = 4;
   
    int ans = numIslands(ptr, gridSize, &gridColSize);
    
    printf("%d",ans);
    
    printf("\nHello, World!\n");
    return 0;
}
