#include <stdio.h>

int main(void)
{
	struct Data {
		int x;
		int y;
	} a = {10, 20}, b;

	b = a; /*構造体をコピー*/

	printf("x = %d, y = %d\n", b.x, b.y);
	return 0;
}
