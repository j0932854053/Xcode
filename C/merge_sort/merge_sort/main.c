//
//  main.c
//  merge_sort
//
//  Created by 龔星宇 on 2022/5/12.
//

#include <stdio.h>
#include <string.h>
#include <math.h>


#include <stdio.h>

void mergeSort(int *, int, int);
void merge(int *, int, int);

int main() {
    int arr[8] = {4, 6, 1, 9, 5, 3, 0, 2};
    int dataNum = 8;
    int i;

    printf("before sorting: ");
    for (i=0; i<dataNum; i++)
        printf("%d " , arr[i]);
    printf("\n");
    mergeSort(arr, 0, dataNum - 1);
    printf("after  sorting: ");
    for (i=0; i<dataNum; i++)
        printf("%d " , arr[i]);
    printf("\n");

    return 0;
}

void merge(int* num ,int left, int right){
    int i, j, k;
    int mid = (left + right) / 2;
    int tmp_length = right - left + 1;
    int tmp[tmp_length];
    
    for (k = 0, i = left, j = mid+1 ; i <= mid || j <= right ; k++){
        if (i > mid)
            tmp[k] = num[j++];
        else if (j > right)
            tmp[k] = num[i++];
        else if (num[i] < num[j])
            tmp[k] = num[i++];
        else
            tmp[k] = num[j++];
    }
    for (i = left, k = 0; i <= right; i++, k++)
        num[i] = tmp[k];
}

void mergeSort(int *arr,int left, int right){
    int mid = (left + right) / 2;

    if (left < right){
        mergeSort(arr,left, mid);
        mergeSort(arr,mid+1, right);
        merge(arr,left, right);
    }
}



