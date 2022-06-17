//
//  main.c
//  Array_Student_Score
//
//  Created by 龔星宇 on 2022/5/27.
//

#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char * argv[]) {
    int amount;
    int *score;
    printf("Please input students amounts : \n");
    scanf("%d",&amount);
    score = (int*) malloc(sizeof(int)*amount);
    for (int i=0; i<amount; i++) {
        printf("Student[%d]:",i);
        scanf("%d",&score[i]);
        
    }
    
    
    printf("\n");
    return 0;
}
