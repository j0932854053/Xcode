//
//  main.c
//  Sum_of_Two_Integers
//
//  Created by 龔星宇 on 2022/6/2.
//

#include <stdio.h>

int getSum(int a, int b){
    while (b!=0){
            int c = a&b;
            a= a^b;
            b=(unsigned int) c<<1;
            //b= (0xffffffff& c)<<1;
        }
        return a;

}


int main(int argc, const char * argv[]) {
    int a1 = 2;
    int a2 = -5;
    int ans;
    ans = getSum(a1, a2);
    
    printf("a1 + a2 = %d\n",ans);
    return 0;
}
