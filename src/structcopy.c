#include <stdio.h>

int main(void)
{
	struct Data {
		int x;
		int y;
	} a = {10, 20}, b;

	b = a; /*�\���̂��R�s�[*/

	printf("x = %d, y = %d\n", b.x, b.y);
	return 0;
}
