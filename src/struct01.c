#include <stdio.h>
#include <string.h>

struct Man {
	char name[32];
	int age;
};

int main(void)
{
	struct Man student;
	
	strcpy(student.name, "�R�c���Y");
	student.age = 16;

	printf("���k�̖��O��%s�ł�\n", student.name);
	printf("�N��%d�΂ł�\n", student.age);

	return 0;
}
