//
//  main.c
//  Bubble_Sort
//
//  Created by 龔星宇 on 2022/5/30.
//


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubble_sort(int A[],int n){
    
    int temp;
    
    for (int i = 0; i<n-1; i++) {
        for (int j = 0; j<n-1; j++) {
            if (A[j]>A[j+1]) {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
    
    
}




int main(int argc, const char * argv[]) {
    srand((unsigned int)time(NULL));
    int list[10] = {0};
    int min = 1;
    int max = 20;
    
    printf("list origin : ");
    for (int i = 0; i<10; i++) {
        list[i] = rand() % (max - min + 1) + min;
        printf("%d ",list[i]);
    }
    printf("\n");
    bubble_sort(list, 10);
    printf("list sort   : ");
    
    for (int i = 0; i<10; i++) {
        printf("%d ",list[i]);
    }
    printf("\n");
    
    
    printf("\n");
    return 0;
}
