#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    int s=0;
    int rem;
    while(n>0)
    {
        rem=n%10;
        s=s+rem;
        n=n/10;
    }
    printf("%d",s);
    //Complete the code to calculate the sum of the five digits on n.
    return 0;
}
