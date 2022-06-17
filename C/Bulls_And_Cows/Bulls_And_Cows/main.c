//
//  main.c
//  Bulls_And_Cows
//
//  Created by 龔星宇 on 2022/5/29.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    char ans[5];
    char guess[5];
    int a = 0,b = 0;
    printf("Please input the answer:");
    fgets(ans, 5, stdin);
    while (a<4) {
        a = 0;
        b = 0;
        fflush(stdin);
        fgets(guess, 5, stdin);
        for (int i = 0; i<4; i++) {
            if (ans[i]==guess[i]) {
                a++;
            }else{
                for (int j = 0; j<5; j++) {
                    if (ans[i]==guess[j]) {
                        b++;
                    }
                }
                
            }
        }
        printf("Result :%dA%dB\n",a,b);
    }
    
    //printf("%s",ans);
    
    printf("\n");
    return 0;
}
