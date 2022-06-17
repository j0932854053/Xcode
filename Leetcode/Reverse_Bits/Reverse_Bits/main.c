//
//  main.c
//  Reverse_Bits
//
//  Created by 龔星宇 on 2022/6/14.
//

#include <stdio.h>

void to2(int n){
    
    for (int i = 0; i<32; i++) {
        if (n & 0x80000000)
            printf("1");
        else
            printf("0");

        n <<= 1;
    }
        
    
    printf("\n");
    
}


uint32_t reverseBits(uint32_t n) {
    
    
    n = ((n >> 16) & 0x0000ffff) | ((n << 16) & 0xffff0000);
    n = ((n >> 8) & 0x00ff00ff) | ((n << 8) & 0xff00ff00);
    n = ((n >> 4) & 0x0f0f0f0f) | ((n << 4) & 0xf0f0f0f0);
    n = ((n >> 2) & 0x33333333) | ((n << 2) & 0xcccccccc);
    n = ((n >> 1) & 0x55555555) | ((n << 1) & 0xaaaaaaaa);
    
    
    return n;
}


int main(int argc, const char * argv[]) {
    
    uint32_t n = 0b00000010100101000001111010011100;
    printf("n   = %d \n",n);
    to2(n);
    uint32_t ans = reverseBits(n);
    to2(ans);
    printf("ans = %d \n",ans);
    printf("\n");
    return 0;
}
