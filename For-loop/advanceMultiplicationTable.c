#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j;
    printf("Input upto the table number starting from 1 : ");
    scanf("%d", &n);

    int multiplier = 0;

    for(i = 1; i <= n; i++){
        for(j = 1; j <= 10; j++){
            multiplier = i * j;
            printf("%d X %d = %d\n", i, j, multiplier);
        }
    }
    return 0;
}
