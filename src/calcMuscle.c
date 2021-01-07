//////////////////////////////////
//  骨格筋量を計算するプログラム  //
//////////////////////////////////

#include <stdio.h>

float muscle(float weight, float rateOffat);

int main()
{
    float weight;
    float rateOffat;
    float result;

    printf("体重を入力してください: ");
    scanf("%f", &weight);
    printf("体脂肪率を入力してください: ");
    scanf("%f", &rateOffat);

    result = muscle(weight, rateOffat);
    printf("骨格筋率: %f", result);
    return 0;
}

float muscle(float weight, float rateOffat)
{
    float fat = weight * (rateOffat / 100);
    float rmFat = weight - fat;
    float muscle = rmFat / 2;
    float rateOfmuscle = muscle / weight * 100;
    return rateOfmuscle;
}
