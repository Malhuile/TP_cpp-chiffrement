#pragma once
#include <string>

class BasicEncrypt
{
public:
	BasicEncrypt() {
		_plain = "plain";
		_cypher = "cypher";
	};
	void encode();
	void decode();
	std::string getPlain();
	std::string getCypher();


protected:
	std::string _plain;
	std::string _cypher;
};
