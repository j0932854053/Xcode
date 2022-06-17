//
//  main.c
//  Insertion_Sort
//
//  Created by 龔星宇 on 2022/5/30.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void insertion_sort(int A[], int n){
    for (int i = 0; i<n; i++) {
        int j = i;
        while (j>0 && A[j-1]>A[j]) {
            int temp;
            temp = A[j-1];
            A[j-1] = A[j];
            A[j] = temp;
            j--;
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
    insertion_sort(list, 10);
    printf("list sort   : ");
    
    for (int i = 0; i<10; i++) {
        printf("%d ",list[i]);
    }
    printf("\n");
    
    
    printf("\n");
    return 0;
}
