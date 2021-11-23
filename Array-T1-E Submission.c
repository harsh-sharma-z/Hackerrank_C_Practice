#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    int i,j, p;
    for( i=0;i<n;i++)
    {
        p=1;
        for( j=0;j<n;j++)
        {
            if(i!=j)
            {
                p=p*a[j];
            }

        }
        printf("%d ",p);
    }
    return 0;
}
