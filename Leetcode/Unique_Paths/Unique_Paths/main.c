//
//  main.c
//  Unique_Paths
//
//  Created by 龔星宇 on 2022/6/13.
//

#include <stdio.h>
#include <stdlib.h>

double fac(int n){
    double ret = 1;
    for (int i = 1; i<=n; i++) {
        ret = ret*i;
    }
    return ret;
}
//Math
int uniquePaths(int m, int n){
    
    double ret = 0;
    // ret = (m-1)!/(((m-1)!*(n-1)!)
    // ret = fac((m-1) + (n-1))/(fac(m-1)*fac(n-1));
    
    double up = 1;
    if (m>n) {
        for (int i = (m-1)+1; i<=((m-1)+(n-1)); i++) {
            up = up*i;
        }
        ret = up/fac(n-1);
    }
    else{
        for (int i = (n-1)+1; i<=((m-1)+(n-1)); i++) {
            up = up*i;
        }
        ret = up/fac(m-1);
        
    }
    
    
    
    return ret;
}

//DP
int uniquePaths2(int m, int n){
    //二維陣列 https://lagunawang.pixnet.net/blog/post/7741220-%5B%E8%BD%89%E9%8C%84%5Dc-c%2B%2B-%E7%9A%84%E5%A4%9A%E7%B6%AD%E5%8B%95%E6%85%8B%E9%99%A3%E5%88%97
    
    int** ret = (int**) malloc(sizeof(int*)*m);
    int* ret2 = (int*) malloc(sizeof(int)*m*n);
    for (int i = 0; i<m; i++, ret2+=n){
        ret[i] = ret2;
    }
    ret[0][0] = 1;
    //ret[0][1] = 1;
    //ret[1][0] = 1;
    for (int i = 0; i<m; i++) {
        for (int j = 0; j<n; j++) {
            if (i==0 || j==0) {
                ret[i][j] = 1;
            }else{
                ret[i][j] = ret[i-1][j] + ret[i][j-1];
                //printf("ret[%d][%d] = %d\n",i,j,ret[i][j]);
            }
            
        }
    }
    
    
    return ret[m-1][n-1];
}

int main(int argc, const char * argv[]) {
    
    int m = 16;
    int n = 16;
    
    int ans = uniquePaths(m, n);
    
    printf("%d",ans);
    
    
    printf("\n");
    return 0;
}
