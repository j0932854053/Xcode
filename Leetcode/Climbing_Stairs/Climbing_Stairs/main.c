//
//  main.c
//  Climbing_Stairs
//
//  Created by 龔星宇 on 2022/6/13.
//

#include <stdio.h>
#include <stdlib.h>



int climbStairs(int n){

    
    if(n<=2){
        return n;
    }
    
    int* ret = (int* ) malloc (sizeof(int)*n);
    
    
    ret[0] = 1; // n=1
    ret[1] = 2; // n=2
    
    for(int i = 3;i<=n;i++){
       ret[i-1] = ret[i-2]+ret[i-3];
        
    }
    
    return ret[n-1];
    
    
}

int main(int argc, const char * argv[]) {
    
    int n = 4;
    
    int ans = climbStairs(n);
    
    printf("%d ",ans);
    
    printf("\n");
    return 0;
}
