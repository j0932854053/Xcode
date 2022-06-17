//
//  main.c
//  Mod3check
//
//  Created by 龔星宇 on 2022/5/12.
//
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int Mod3(int input){
    //int input = 12;
    int remainder = 0;
    while(input != 0){
      remainder += input & 0x3;
      input = input>>2;
      if(input == 0 && remainder >= 3){
        input = remainder-3;
        remainder = 0;
      }
    }
    return remainder==0 ? 1:0;
}

int main(){
    
    for (int i = 1; i<25; i++) {
        printf("%d:%d\n",i,Mod3(i));
    }
   
    return 0;
}

