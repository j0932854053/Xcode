//
//  main.c
//  Time_Angle
//
//  Created by 龔星宇 on 2022/5/26.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int h ,m;
    float dh,dm,d;
    
    scanf("%d:%d", &h, &m);
    
    dm = 6*m;
    dh = 30*h+0.5*m;
    d = dm-dh;
    if (d<0) {
        d=-d;
    }
    if (d>360) {
        d=d-360;
    }
    if (d>180) {
        d=360-d;
    }
    
    
    
    printf("%f\n",d);
    return 0;
}
