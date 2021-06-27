#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    scanf("%d",&n);
    
    int a[n];
    for (int i=0;i<n;i++)
    {
        a[i]=i*2;

    }
    
    int alter=a[(n/2)+1];
    
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            printf("%d ",a[j]);
        
        printf("\n");
        
        for (int k=0;k<n;k++)
        {
            a[k]=a[k]+alter;
        }
        
    }
    return 0;
}
