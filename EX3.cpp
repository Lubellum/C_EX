#include <iostream>

struct TWetherInfo
{
	int month; // �g��Ȃ��H
	int precipitation;
	int temperature;
	int humidity;
};

enum num : int
{
	january, // 0�n�܂�
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
	december, // 12��(���l��11)

	max,
};

void EX3()
{
	TWetherInfo wetherInfo[12];

	for (int i = 0; i < 12; i++)
	{
		wetherInfo[i].month = i + 1;

		printf_s("%d��\n", wetherInfo[i].month);
		printf_s("�~���ʂ́H\n");
		scanf_s("%d", &wetherInfo[i].precipitation);
		printf_s("�C���́H\n");
		scanf_s("%d", &wetherInfo[i].temperature);
		printf_s("���x�́H\n");
		scanf_s("%d", &wetherInfo[i].humidity);
		printf_s("\n");
	}


	// �z����̃\�[�g�F���H�ł��Ȃ�


	int start = 0;
	int end = 0;

	while (start == 0)
	{
		printf_s("�������牽���܂ŕ\�������܂����H(�n�܂�)\n");
		scanf_s("%d", &start);
	}

	while (end < start)
	{
		printf_s("�������牽���܂ŕ\�������܂����H(�I���)\n");
		scanf_s("%d", &end);
	}

	int startIndex = start - 1; // �\���̓s����,�Ǘ��̓s���̂��荇�킹!!!!!!
	int endIndex = end - 1;

	for (int i = startIndex; i <= endIndex; i++)
	{
		printf_s("%d��\n", wetherInfo[i].month);
		printf_s("�~����[mm]:%d\n", wetherInfo[i].precipitation);
		printf_s("�C��[��C] :%d\n", wetherInfo[i].temperature);
		printf_s("���x[%%]  :%d\n", wetherInfo[i].humidity);
	}
}