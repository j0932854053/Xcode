//
//  main.c
//  0804
//
//  Created by 龔星宇 on 2022/8/4.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
int *calLps(char *pat);

bool kmpSearch(char *pat, char *str)
{
    int pLen = strlen(pat);
    int sLen = strlen(str);
    int *lps = calLps(pat);
    int ipat = 0, istr = 0;

    while (istr < sLen)
    {
        if (pat[ipat] == str[istr])
        {
            ++ipat;
            ++istr;
            if (ipat == pLen)
            {
                //printf("index : %d\n", istr - ipat);
                return true;
            }
        }
        else
        {
            if (ipat == 0)
                ++istr;
            else
                ipat = lps[ipat - 1];
        }
    }
    free(lps);
    return false;
}

int *calLps(char *pat)
{
    int pLen = strlen(pat);
    int *lps = (int *)malloc(sizeof(int) * pLen);
    int ipat = 1, iwhole = 0;
    lps[0] = 0;
    while (ipat < pLen)
    {
        if (pat[ipat] == pat[iwhole])
        {
            lps[ipat++] = ++iwhole;
        }
        else if (iwhole == 0)
        {
            lps[ipat++] = iwhole;
        }
        else
        {
            iwhole = lps[iwhole - 1];
        }
    }
    return lps;
}

int main(void)
{
    char *p = "aa";
    // scanf("%s", p);

    char *s[] = {
        "aaaabbbbbb",
        "aabcddddd",
        "zabcd",
        "aaghhh",
        "abcdefg",
        "xyzabc",
        "xxxxxaaxxtwgr"};

    int s_len = sizeof(s) / sizeof(s[0]);
    for (int i = 0; i < s_len; i++)
    {
        
        if (!kmpSearch(p, s[i])) {
            printf("%s\n", s[i]);
        }
        
    }

    // printf("%lu\n", strlen(p));
    // int *lps = calLps(p);
    // for (int i = 0; i < strlen(p); i++)
    // {
    //     printf("%d\t", lps[i]);
    // }
    // printf("\n");
}

