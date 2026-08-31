#include <stdio.h>

int main()
{
    int h[8];
    int i;
    int p1, p2, p4;
    int error_position;

    printf("Enter 7-bit Hamming code: ");

    for (i = 1; i <= 7; i++)
    {
        scanf("%d", &h[i]);
    }

    p1 = h[1] ^ h[3] ^ h[5] ^ h[7];
    p2 = h[2] ^ h[3] ^ h[6] ^ h[7];
    p4 = h[4] ^ h[5] ^ h[6] ^ h[7];

    error_position = p4 * 4 + p2 * 2 + p1;

    if (error_position == 0)
    {
        printf("\nNo error detected.\n");
    }
    else
    {
        printf("\nError detected at position: %d\n", error_position);

        h[error_position] = h[error_position] ^ 1;

        printf("Error corrected.\n");
    }

    printf("Corrected Hamming code: ");

    for (i = 1; i <= 7; i++)
    {
        printf("%d", h[i]);
    }

    printf("\nOriginal data: ");

    printf("%d%d%d%d", h[3], h[5], h[6], h[7]);

    printf("\n");

    return 0;
}
