//
//  main.c
//  Prime_List
//
//  Created by 龔星宇 on 2022/6/1.
//

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void prime_list(int *prime, int n){
    // prime[5] = 1 : 數字5是質數
    // 設定prime[i] = 1為質數 0為合數
    for (int i = 0; i<=n; i++) {
        prime[i] = 1;
    }
    
    prime[0] = 0;   // 設定數字0不是質數
    prime[1] = 0;   // 設定數字1不是質數
    
    int sqrt_root = sqrt((double)n);    // 參考README.md就知道為什麼要這樣
    for (int i = 2; i<= sqrt_root; i++) {
        if (prime[i] == 1) {
            //  把質數的倍數都設為合數
            for (int j = i+i; j<=n; j = j+i) {
                prime[j] = 0;
            }
        }
    }
    
}



int main(int argc, const char * argv[]) {
    
    while (1) {
        int *dynArr;
        int length;
        printf("n:");
        scanf("%d",&length);
        // length = 19; //印出1~19所有質數
        
        dynArr = malloc( (length+1) * sizeof(int) );
        prime_list(dynArr,length);
        
        for (int i = 0; i<length ; i++) {
            if (dynArr[i] == 1) {
                printf("%d ",i);
            }
        }
        free(dynArr);
        
        printf("\n");
    }
    
    
    
    //return 0;
}
