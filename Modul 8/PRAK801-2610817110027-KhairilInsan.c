#include <stdio.h>

int main(void)
{
    int value;
    scanf("%d", &value);
    int *ptr = &value;

    printf("Nilai variabel = %d\n", value);
    printf("Alamat variabel = %p\n", (void *)ptr);
    printf("Nilai melalui pointer = %d\n", *ptr);
    *ptr = *ptr * 2;
    printf("Nilai setelah diubah lewat pointer = %d\n", *ptr);

    return 0;
}
