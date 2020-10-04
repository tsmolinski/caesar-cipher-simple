#pragma once

#include <iostream>
#include <string>

using namespace std;

class CaesarCipher
{

public:
	CaesarCipher();
	~CaesarCipher();

	string encrypt(string str, int shift);
};