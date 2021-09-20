#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
int main() {
	int i, j;

    for(i=1; i<=5; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    
    printf("\n");
    
     for(i=5; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}

