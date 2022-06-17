//
//  main.c
//  Number_of_1_Bits
//
//  Created by 龔星宇 on 2022/6/8.
//

#include <stdio.h>

int hammingWeight(uint32_t n) {
    int ret = 0;
    while(n){
        ret = ret + (n&0x00000001);
        
        n = n>>1;
        
        
        
    }
    return ret;
    
}


int main(int argc, const char * argv[]) {
    
    uint32_t n = 00000000000000000000000000011011;
    int ans ;
    
    ans = hammingWeight(n);
    printf("ans = %d",ans);
    printf("\n");
    return 0;
}
