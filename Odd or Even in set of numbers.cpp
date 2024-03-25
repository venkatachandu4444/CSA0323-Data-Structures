#include <stdio.h>

int main()
{
    int i, n, num;

    printf("Enter the number of elements in the set: ");
    scanf("%d", &n);

    printf("Enter the set of numbers:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &num);
        if(num % 2 == 0)
            printf("%d is an even number.\n", num);
        else
            printf("%d is an odd number.\n", num);
    }

    return 0;
}
