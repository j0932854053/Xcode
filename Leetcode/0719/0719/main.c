//
//  main.c
//  0719
//
//  Created by 龔星宇 on 2022/7/19.
//

#include <stdio.h>
#include <stdlib.h>

int* create_array(int n){
    int *a = NULL;
    a = malloc (n * sizeof(int));
    for (int i = 0; i<n; i++) {
        a[i] = i+1;
        printf("%d\n",a[i]);

    }
    if (a == NULL) {
        printf("error!\n");
    }
    printf("\n\n\n\n");
    return a;
}

int main(int argc, const char * argv[]) {
    int length = 3;
    
    int* arr = create_array(length);

    for (int i = 0; i<length; i++) {
        printf("%d\n",arr[i]);

    }

    free(arr);
    printf("\n\n\n\n");
    return 0;
}
