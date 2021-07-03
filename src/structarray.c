/* encoding=shiftjis */
#define STUDENTNO 5
#define SUBJECTNO 3

#include <stdio.h>

struct Score {
	char name[32];
	int Japanese;
	int Math;
	int English;
};

void drawline(void);
void draw(struct Score (*));

int main(void)
{
	struct Score myclass[STUDENTNO] = {
		{"�c��", 80, 80, 55},
		{"����", 75, 90, 70},
		{"��c", 50, 45, 30},
		{"���", 100, 55, 90},
		{"����", 60, 85, 35}
	};

	draw(myclass);
}

float mean(struct Score (*data), float *jap, float *mat, float *eng)
{
	for (int i = 0; i < STUDENTNO; i++, data++) {
		*jap += data->Japanese;
		*mat += data->Math;
		*eng += data->English;
	}
	*jap /= STUDENTNO;
	*mat /= STUDENTNO;
	*eng /= STUDENTNO;
}

void drawline(void)
{
	for (int i = 0; i < 35; i++)
		printf("-");
	printf("\n");
}

void draw(struct Score (*data))
{
	float mean_jap = 0;
	float mean_mat = 0;
	float mean_eng = 0;

	printf("**** ���� ****\n\n");
	printf("%6s %6s %6s %6s %6s\n", "����", "����", "���w", "�p��", "���v");
	drawline();
	for (int i = 0; i < STUDENTNO; i++, data++)
		printf("%6s %6d %6d %6d\n", data->name, data->Japanese, data->Math, data->English);
	drawline();
	mean(data, &mean_jap, &mean_mat, &mean_eng);
	printf("%6f %6f %6f", mean_jap, mean_mat, mean_eng);
}
