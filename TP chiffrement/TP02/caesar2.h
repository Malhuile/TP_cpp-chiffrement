#pragma once
#include <string>

class Caesar2
{
public:
	Caesar2(std::string plain, std::string cypher) {
		_plain = plain;
		_cypher = cypher;
	};
	void encode(int);
	void decode(int);
	std::string getPlain();
	std::string getCypher();

protected:
	std::string _plain;
	std::string _cypher;
};
