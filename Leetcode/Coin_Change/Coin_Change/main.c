//
//  main.c
//  Coin_Change
//
//  Created by 龔星宇 on 2022/6/13.
//

#include <stdio.h>
#include <stdlib.h>

#define min(a,b) ((a)<(b) ? (a) : (b))

int coinChange(int* coins, int coinsSize, int amount){
    
    int* dp = (int *) malloc(sizeof(int)*(amount+1));   // amount 從0~amount
    
    for (int i = 0; i<amount+1; i++) {
        dp[i] = amount+1;
    }
    dp[0] = 0;
    
    for (int i = 1; i<amount+1; i++) {
        for (int j = 0; j<coinsSize; j++) {
            if (i-coins[j]>=0) {
                dp[i] = min(dp[i], dp[i-coins[j]]+1);
            }
        }
    }
    
    
    if (dp[amount]<=amount) {
        return dp[amount];
    }else{
        return -1;
        
    }
    
    return -2;
}


int main(int argc, const char * argv[]) {
    
    int coins[] = {186,419,83,408};
    int amount = 6249;
    int len = sizeof(coins)/sizeof(coins[0]);
    
    int ans = coinChange(coins, len, amount);
    
    printf("%d",ans);
    
    
    printf("\n");
    return 0;
}
