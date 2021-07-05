#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a[] = { 1, 2, 100, 50 };
    int length = sizeof(a) / sizeof(int);

    for (int i = 0; i < length; i++) {
        printf("&a[%d] = %p\n", i, &a[i]);
    }
    printf("\na = %p\n", a);
    return 0;
}
