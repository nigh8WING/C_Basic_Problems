#include <stdio.h>

int main()
{
    int n, i;
    printf("Input the number (Table to be calculated) : ");
    scanf("%d", &n);

    int value = n;

    for(i = 1; i <= 10; i++){
        value = n * i;
        printf("%d X %d = %d\n", n, i, value);
    }
    return 0;
}
