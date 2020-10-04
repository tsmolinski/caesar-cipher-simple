#include "CaesarCipher.h"


CaesarCipher::CaesarCipher()
{

}

CaesarCipher::~CaesarCipher()
{

}

string CaesarCipher::encrypt(string input, int shift)
{
	string result = "";

	for (int i = 0; i < input.size(); i++)
	{
		if (isalpha(input[i]))
		{
			if (islower(input[i]))
			{
				result += (input[i] - 'a' + shift) % 26 + 'a';
			}
			else
			{
				result += (input[i] - 'A' + shift) % 26 + 'A';
			}
		}
		else
		{
			result += input[i];
		}
	}

	return result;
}
