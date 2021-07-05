#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a[4] = { 1, 2, 100, 5 };
    int length = sizeof(a) / sizeof(int);

    for (int i = 0; i < length; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }
    return 0;
}
