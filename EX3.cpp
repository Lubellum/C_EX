#include <iostream>

struct TWetherInfo
{
	int month; // 使わない？
	int precipitation;
	int temperature;
	int humidity;
};

enum num : int
{
	january, // 0始まり
	february,
	march,
	april,
	may,
	june,
	july,
	august,
	september,
	october,
	nobember,
	december, // 12月(実値は11)

	max,
};

void EX3()
{
	TWetherInfo wetherInfo[12];

	for (int i = 0; i < 12; i++)
	{
		wetherInfo[i].month = i + 1;

		printf_s("%d月\n", wetherInfo[i].month);
		printf_s("降水量は？\n");
		scanf_s("%d", &wetherInfo[i].precipitation);
		printf_s("気温は？\n");
		scanf_s("%d", &wetherInfo[i].temperature);
		printf_s("湿度は？\n");
		scanf_s("%d", &wetherInfo[i].humidity);
		printf_s("\n");
	}


	// 配列内のソート：実践でやるなら


	int start = 0;
	int end = 0;

	while (start == 0)
	{
		printf_s("何月から何月まで表示させますか？(始まり)\n");
		scanf_s("%d", &start);
	}

	while (end < start)
	{
		printf_s("何月から何月まで表示させますか？(終わり)\n");
		scanf_s("%d", &end);
	}

	int startIndex = start - 1; // 表示の都合と,管理の都合のすり合わせ!!!!!!
	int endIndex = end - 1;

	for (int i = startIndex; i <= endIndex; i++)
	{
		printf_s("%d月\n", wetherInfo[i].month);
		printf_s("降水量[mm]:%d\n", wetherInfo[i].precipitation);
		printf_s("気温[°C] :%d\n", wetherInfo[i].temperature);
		printf_s("湿度[%%]  :%d\n", wetherInfo[i].humidity);
	}
}