#include <iostream>

void EX1()
{
	const char* str = "Game Programmer";
	char arr[20] = {};

	// str �̕������ �z�� arr �ɃR�s�[����

	for (int i = 0; i < 16; i++)
	{
		arr[i] = str[i];
	}

	printf_s("%s\n", arr);
}