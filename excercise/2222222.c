#include <stdio.h>

int main()
{
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    while (1 <= B, C <= A)
    {
        if (A % B == 0 && A % C == 0)
        {
            printf("%d %d\n", B * 5, C * 5);
            break;
        }
    }
    return 0;
}





