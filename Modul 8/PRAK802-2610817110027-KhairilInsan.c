#include <stdio.h>

void Swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(void)
{
    int Andi, Budi;
    scanf("%d", &Andi);
    scanf("%d", &Budi);

    printf("Sebelum ditukar: Andi = %d, Budi = %d\n", Andi, Budi);
    Swap(&Andi, &Budi);
    printf("Sesudah ditukar: Andi = %d, Budi = %d\n", Andi, Budi);

    return 0;
}
