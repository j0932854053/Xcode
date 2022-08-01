//
//  main.c
//  test
//
//  Created by 龔星宇 on 2022/6/30.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int search_bin(int list[],int find_n,int len){
    int low = 0;
    int high = len - 1;
    
    while (low<=high) {
        int mid = (low+high)/2;
        
        if (list[mid]==find_n) {
            return mid;
        }else if (list[mid]>find_n){
            high = mid-1;
        }else if (list[mid]<find_n)
            low = mid+1;
    }
    
    return -1;
}


int main(int argc, const char * argv[]) {
    
    int n;
    int list[] = {3 ,9 ,11 , 16 } ;
    printf("please  input n:");
    scanf("%d",&n);
    
    int ans = search_bin(list, n, sizeof(list)/sizeof(list[0]));
    
    if (ans<0) {
        printf("n is not in list\n");
    }else{
        printf("n is in index %d \n",ans);
    }
    
    
    printf("\n");
    
    return 0;
}
