//
//  main.c
//  0721
//
//  Created by 龔星宇 on 2022/7/21.
//

#include <stdio.h>


int main(int argc, const char * argv[]) {
    int n1,n2,n3,n4,n5;
    int a[3]={1,2,3};
    int*p;
    int**pp;
    p=a;
    pp=&p;
    
    *p+=1;
    p+=1;
    **pp-=1;
    *pp-=1;
    *p+=1;
    *pp+=1;
    
    printf("%d\n",a[0]);
    printf("%d\n",a[1]);
    printf("%d\n",a[2]);
    printf("%d\n",*p);
    printf("%d\n",**pp);
    return 0;
}
