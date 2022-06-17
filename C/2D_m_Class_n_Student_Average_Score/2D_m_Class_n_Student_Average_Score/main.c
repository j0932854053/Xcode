//
//  main.c
//  2D_m_Class_n_Student_Average_Score
//
//  Created by 龔星宇 on 2022/5/28.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    int m ,n;
    double sum = 0 ,avg = 0;
    int **student;
    printf("請輸入班級數目:");
    scanf("%d",&m);
    printf("請輸入學生人數:");
    scanf("%d",&n);
    
    //動態配置m班各n人的成績
    student = (int**) malloc(sizeof(int*)*m);
    for (int j = 0; j<m; j++) {
        student[j] = (int*) malloc(sizeof(int)*n);
    }
    
    //讓使用者輸入每個人的成績
    for (int i = 0; i<m; i++) {
        printf("班級%d\n",i);
        for (int j = 0; j<n; j++) {
            printf("學生%d:",j);
            scanf("%d",&student[i][j]);
        }
        printf("-----------\n");
    }
    
    //計算全校平均
    for (int i = 0; i<m; i++) {
        for (int j = 0; j<n; j++) {
            sum = sum + student[i][j];
        }
    }
    avg = sum/(m*n);
    printf("全校分數平均:%f",avg);
    printf("\n");
    return 0;
}
