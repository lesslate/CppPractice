#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

typedef struct person
{
	char name[20];
	int height;
	int weight;
	double BMI;
} PERSON;
PERSON find_max_person(PERSON* sp, int size);

int main()
{
	PERSON sp[5], max_sp;
	int i;

	srand((unsigned int)time(NULL));
	for (i = 0; i < 5; i++)
	{
		printf("Name >> ");
		scanf("%s", sp[i].name);
		sp[i].height = rand() % (180 - 160 + 1) + 160;
		sp[i].weight = rand() % (90 - 50 + 1) + 50;
		sp[i].BMI = sp[i].weight / (sp[i].height / 100.0) * (sp[i].height / 100.0);
	}
	max_sp = find_max_person(sp, 5);
	printf("Max BMI person name: %s, Height: %d, Weight: %d, BMI: %lf\n",
		max_sp.name, max_sp.height, max_sp.weight, max_sp.BMI);

	return 0;
}
PERSON find_max_person(PERSON* sp, int size)
{
	int i, max = 0;
	for (i = 1; i < 5; i++)
		if (sp[i].BMI > sp[max].BMI)
			max = i;
	return sp[max];
}