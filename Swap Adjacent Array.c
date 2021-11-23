#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d",&n);
    if(n%2!=0)
    {
        printf("Not even.");
    }
    else
    {
        int s;
        int a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(int i=0;i<n;i=i+2)
        {
            s=a[i];
            a[i]=a[i+1];
            a[i+1]=s;
        }
        for(int i=0;i<n;i++)
            printf("%d ",a[i]);
    }
    
    return 0;
}
