#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
   int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)//for I
    {
        if(i==1||i==n)
        {
            for(int j=1;j<=n;j++)
                printf("*");
        }
        else
        {
            for(int j=1;j<=n/2;j++)
            {
                printf(" ");
            }
                printf("*");
        }
        printf("\n");
    }
    printf("\n");
    for(int i=1;i<=n;i++)//for L
    {
        for(int j=1;j<=n;j++)
        {
            if(j==1||i==n)
                printf("*");
            else
               printf(" ");
        }
        printf("\n");
    }
    printf("\n");
    for(int i=1;i<=n;i++)//for O
    {
        for(int j=1;j<=n;j++)
        {
          if(i==1||i==n||j==1||j==n)
              printf("*");
            else
              printf(" ");
        }
        printf("\n");
    }
    printf("\n");
    int c=0,a=1,b=n; //for V
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(c==2)
            {
                c=0;
                a++;
                b--;
            }
            if(j==a||j==b)
                printf("*");
            else
                printf(" ");
            
        }
        printf("\n");
        c++;
    }
    printf("\n");
    for(int i=1;i<=n;i++)//for E
    {
        for(int j=1;j<=n;j++)
        {
          if(i==1||i==n||i==n/2 + 1||j==1)
              printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
    for(int i=1;i<=n;i++)//for C
    {
        for(int j=1;j<=n;j++)
        {
          if(i==1||i==n||j==1)
              printf("*");
            else
              printf(" ");
        }
        printf("\n");
    }
    printf("\n");
    return 0;
