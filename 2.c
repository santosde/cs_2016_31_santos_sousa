#include "stdio.h"

void main(void)
{
	int day, month, i;
	printf("Write the day:");
	scanf("%i", &day);
	printf("Write the month:");
	scanf("%i", &month);
	if (day > 31 || day < 1 || month > 12 || month < 1)
		printf("Wrong information\n");
	else
	{
		i = day;
		day = month;
		month = i;
		printf("Day:%i Month:%i\n", day, month);
	}
}
