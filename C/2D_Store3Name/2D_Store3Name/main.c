//
//  main.c
//  2D_Store3Name
//
//  Created by 龔星宇 on 2022/5/28.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    char name[3][15];
    //輸入三個人的英文名
    for (int i = 0; i<3; i++) {
        printf("Please input person%d's name:",i+1);
        fgets(name[i],15,stdin);
        printf("\n");
    }
    
    //印出三個人的英文名
    for (int i = 0; i<3; i++) {
        printf("Person%d's name:%s",i+1,name[i]);
        printf("\n");
    }
    
    
    
    printf("\n");
    return 0;
}
