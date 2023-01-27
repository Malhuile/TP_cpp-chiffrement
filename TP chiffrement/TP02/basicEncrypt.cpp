#include "basicEncrypt.h"

void BasicEncrypt::decode() {
	_plain = _cypher;
}

void BasicEncrypt::encode() {
	_cypher = _plain;
}

std::string BasicEncrypt::getCypher() {
	return _cypher;
}

std::string BasicEncrypt::getPlain() {
	return _plain;
}