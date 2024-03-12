#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, sum = 0, count = 0;

    printf("Input number of terms : ");
    scanf("%d", &n);

    printf("The Odd numbers are: ");
    for(i = 1; count < n; i++){
        if(i & 1){
            printf("%d ", i);
            sum += i;
            count++;
        }
    }
    printf("\n");
    printf("The Sum of odd Natural Number up to %d terms: %d\n", n, sum);

    return 0;
}
