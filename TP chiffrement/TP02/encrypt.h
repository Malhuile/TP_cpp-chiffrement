#pragma once

class Encrypt
{
public:
	virtual void encode() = 0;
	virtual void decode() = 0;
	std::string getPlain() {
		return _plain;
	}

protected:
	std::string _plain;
	std::string _cypher;
};