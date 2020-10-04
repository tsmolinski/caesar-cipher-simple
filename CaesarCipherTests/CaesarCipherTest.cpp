#include "pch.h"

#include "..//caesar-cipher-simple/CaesarCipher.h"

TEST(CaesarCipherTests, encrypt_moveLettersShift3_encrypted)
{
	CaesarCipher cipher;
	string text = cipher.encrypt("dog", 3);
	EXPECT_EQ(text, "grj");
}

TEST(CaesarCipherTests, encrypt_movesJustAlphabeticLetters_encrypted)
{
	CaesarCipher cipher;
	string text = cipher.encrypt("1dog!@2", 3);
	EXPECT_EQ(text, "1grj!@2");
}