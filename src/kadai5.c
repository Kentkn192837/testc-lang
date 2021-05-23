#include <stdio.h>
#include <stdlib.h>

#define N 100
#define A 0
#define B 2

int main(void)
{
    unsigned int seed = 12345;
    double x[N];
    srand(seed);
    for (int i = 0; i < N; i++){
        x[i] = (double)rand() / RAND_MAX * (B - A) + A;
        printf("%3.2lf\n", x[i]);
    }
    return 0;
}
