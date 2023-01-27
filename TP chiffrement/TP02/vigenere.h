#pragma once
#include <string>

class Vigenere
{
public:
	Vigenere(std::string plain, std::string cypher) {
		_plain = plain;
		_cypher = cypher;
	};
	void decode(std::string);
	void encode(std::string);
	std::string getPlain();
	std::string getCypher();

private:
	std::string _plain;
	std::string _cypher;
};
