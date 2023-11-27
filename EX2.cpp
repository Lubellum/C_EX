#include <iostream>
#include <cassert>

bool strcpy_s(const char* aSrc, char* aDst, const size_t aDstLen)
{
	assert( (aSrc != nullptr) && (aDst != nullptr));	

	for (int i = 0; i < aDstLen; i++)
	{
		aDst[i] = aSrc[i];
	}

	for (int i = 0; i < aDstLen; i++)
	{
		if (!(aSrc[i] - aDst[i] == 0))
		{
			return false;
		}
	}
	return true;
}

void EX2()
{
	const char* str = "Game Programmer";
	//const char str[] = {'G', 'A', 'M', 'E'};
	char string[20];

	if ( strcpy_s(str, string, 20) )
	{
		printf_s("%s", string);
	}
	else
	{
		printf_s("Ž¸”s");
	}
}