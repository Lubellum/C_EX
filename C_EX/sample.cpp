#include <iostream>

struct TPrecipitation
{
	int month;
	int precipitation;
};

void Tutorial10_02_2()
{
	TPrecipitation precipitation[4];

	for (int i = 0; i < 4; i++)
	{
		printf_s("‰½ŒŽH");
		scanf_s("%d", &precipitation[i].month);
		printf_s("~…—Ê‚ÍH");
		scanf_s("%d", &precipitation[i].precipitation);
	}

	for (int i = 0; i < 4; i++)
	{
		printf_s("%dŒŽ  :\n", precipitation[i].month);
		printf_s("~…—Ê:%d\n", precipitation[i].precipitation);
	}
}