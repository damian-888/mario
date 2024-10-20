#include <stdio.h>

int main (void)
{
    int size, row, col, space;

    do {
        printf("Pyrimid size: ");
        scanf("%d", &size);
    } while (size < 1 || size > 8);
        

    for (int row = 0; row < size; row++)
    {
        for(space = 0; space < size - row - 1; space++)
        {
            printf(" ");
        }
        for (int col = 0; col <= row; col++)
        {
            printf("#");

        }
    printf("\n");
    }
    return 0;
}
    