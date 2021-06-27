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
    for(int i=1;i<=n;i++)//G
    {
        for(int j=1;j<=n;j++)
        {
            if(i==1||j==1||i==n||(i==n/2 +1 && j>n/2)||(j==n&&i>n/2))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
     for(int i=1;i<=n;i++)//L
    {
        for(int j=1;j<=n;j++)
        {
            if(i==n||j==1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
   int c=1,a=n/2 +1,b=n/2+1; //for A
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(c==2)
            {
                c=0;
                a--;
                b++;
            }
            if(j==a||j==b)
                printf("*");
            else if(i==n/2 + 1 && (j>=a && j<=b))
                    printf("*");
            else 
                printf(" ");
            
        }
        printf("\n");
        c++;
    }
    printf("\n");
    return 0;
}
