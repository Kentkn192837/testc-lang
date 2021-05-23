#include <stdio.h>
#include <stdlib.h>

#define N 1000
#define A -1
#define B 1

int main(void)
{
    unsigned int seed = 12345;
    double x[N], y[N], z[N];
    srand(seed);
    for (int i = 0; i < N; i++){
        x[i] = (double)rand() / RAND_MAX * (B - A) + A;
        y[i] = (double)rand() / RAND_MAX * (B - A) + A;
        z[i] = (double)rand() / RAND_MAX * (B - A) + A;
        // printf("x[%d] = %3.2lf\n", i, x[i]);
        // printf("y[%d] = %3.2lf\n", i, y[i]);
        // printf("z[%d] = %3.2lf\n", i, z[i]);
    }

    FILE *fp;
    char *filename = "data.txt";
    fp = fopen(filename, "w");
    if (fp == NULL) {
        printf("Can't open this file.");
        exit(1);
    }

    for (int i = 0; i < N; i++) {
        fprintf(fp, "%lf,", x[i]);
        fprintf(fp, "%lf,", y[i]);
        fprintf(fp, "%lf\n", z[i]);
    }

    fclose(fp);
    return 0;
}
