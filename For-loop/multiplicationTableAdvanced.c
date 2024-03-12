#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Input upto the table number starting from 1 : ");
    scanf("%d", &n);

    int i, j;
    int multiplier = 0;

    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++){
            multiplier = i * j;
            printf("%d X %d = %d, ", i, j, multiplier);
        }
    }
    return 0;
}
