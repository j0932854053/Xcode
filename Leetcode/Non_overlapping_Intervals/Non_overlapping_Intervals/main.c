//
//  main.c
//  Non_overlapping_Intervals
//
//  Created by 龔星宇 on 2022/6/8.
//

#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    int ia = ((int **)a)[0][0];
    int ib = ((int **)b)[0][0];
    return (ia - ib);
}

int eraseOverlapIntervals(int** intervals, int intervalsSize, int* intervalsColSize){
    int i, count = 0;
    
    /* Sort the intervals based on the start time of each intervals */
    qsort(intervals, intervalsSize, sizeof(intervals[0]), cmp);
    int end = intervals[0][1];

    for(i = 1; i < intervalsSize; i++) {
        /* To check the overlap, simply check the end time with the start time of each new interval
          maintain the end to be minimum of the 2 overlapped interval to minimize the number of erase           */
        if(end > intervals[i][0]) {
            //overlap
            end = end < intervals[i][1]? end:intervals[i][1];
            count++;
        } else {
            /* If there is no overlap, change 'end' to be the current interval's end */
            end = intervals[i][1];
        }
    }
    return count;
}




 
int main(int argc, const char * argv[]) {
    
    
    int arr[][2] ={{1,2},{2,3},{3,4},{1,3}};
    int* ptr[4];
    ptr[0] = &arr[0][0];
    ptr[1] = &arr[1][0];
    ptr[2] = &arr[2][0];
    ptr[3] = &arr[3][0];
    
    int ans;
    int returnsize_temp = 0;
    
    
    ans = eraseOverlapIntervals(ptr, 4, &returnsize_temp);
    
    
    
    printf("\n");
    printf("ans = %d",ans);
    
    
    printf("\n");
    
    
    return 0;
}
