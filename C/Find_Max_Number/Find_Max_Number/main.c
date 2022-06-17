//
//  main.c
//  Find_Max_Number
//
//  Created by 龔星宇 on 2022/5/27.
//

#include <stdio.h>
#include <stdlib.h>
/*

• 宣告一陣列A，長度為5
• 使用一指標P存取此陣列 ex:「*(P+i)」
• 讓使用者輸入5個數字，並找到最大值
*/

#define N 5
int main(){
    int A[N],i;
    int*P;
    P = A;
    
    for(i=0;i<N;i++){
        //scanf("%d",&P[i]);
        //scanf("%d",&(*(P+i));
        scanf("%d",P+i); //P+i => 記憶體位址， *(P+i) =>內容， &(*(P+i)) => 內容取記憶體位址，所以&(*)抵銷
    }
    
    int MaxI = 0;
    for(i=0;i<N;i++){
        //printf("P[%d]:%d ",i,P[i]);
        if(P[i]>=P[MaxI]){
            MaxI = i;
            //printf("\nMaxI:%d\n",MaxI);
        }
    }
    //printf("%d",)
    printf("The bigger number in index %d is %d\n",MaxI+1,P[MaxI]);
    
    
    return 0;
}
