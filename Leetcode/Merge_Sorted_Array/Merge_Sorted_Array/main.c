//
//  main.c
//  Merge_Sorted_Array
//
//  Created by 龔星宇 on 2022/8/1.
//

#include <stdio.h>

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    int p1,p2,ptr;
    p1=m-1; p2=n-1; ptr=m+n-1;
    while(p1>=0 && p2>=0){
        if(nums1[p1]>nums2[p2]){
            nums1[ptr--]=nums1[p1--];
        }else{
            nums1[ptr--]=nums2[p2--];
        }
    }
    while(p2>=0){
        nums1[ptr--]=nums2[p2--];
    }

}


int main(int argc, const char * argv[]) {
    
    int nums1[] = {1,2,3,0,0,0};
    int m = 3;
    int nums2[] = {2,5,6};
    int n = 3;
    
    merge(nums1, sizeof(nums1)/sizeof(nums1[0]), m, nums2, sizeof(nums2)/sizeof(nums2[0]), n);
    
    for (int i = 0; i<m+n; i++) {
        printf("%d ",nums1[i]);
    }
    
    printf("\nHello, World!\n");
    return 0;
}
