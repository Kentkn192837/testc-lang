#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define N 10000
#define A -1
#define B 1

int main(void)
{
    unsigned int seed = 12345;
    double x[N], y[N], z[N], phi[N];

    srand(seed);
    for (int i = 0; i < N; i++){
        // -1‚©‚ç1‚Ì”ÍˆÍ‚Åz‚Ìˆê—l—”‚ð¶¬
        z[i] = (double)rand() / RAND_MAX * (B - A) + A;
        // 0‚©‚ç2ƒÎ‚Ì”ÍˆÍ‚Åˆê—l—”‚ð¶¬
        phi[i] = (double)rand() / RAND_MAX * (M_PI * 2);
        
        x[i] = sqrt( 1 - pow(z[i], 2.0) ) * cos(phi[i]);
        y[i] = sqrt( 1 - pow(z[i], 2.0) ) * sin(phi[i]);
    }

    FILE *fp;
    char *filename = "newdata.txt";
    fp = fopen(filename, "w");
    if (fp == NULL) {
        printf("Can't open this file.");
        exit(1);
    }

    for (int i = 0; i < N; i++) {
        fprintf(fp, "%lf,", x[i]);
        fprintf(fp, "%lf,", y[i]);
        fprintf(fp, "%lf,", z[i]);
        fprintf(fp, "%lf\n", phi[i]);
    }

    fclose(fp);
    return 0;
}
