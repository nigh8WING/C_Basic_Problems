#include <stdio.h>

int main()
{
    int n;
    printf("Input the number (Table to be calculated) : ");
    scanf("%d", &n);

    int value = n;

    int i;

    for(i = 1; i <= 10; i++){
        value = n * i;
        printf("%d X %d = %d\n", n, i, value);
    }
    return 0;
}
