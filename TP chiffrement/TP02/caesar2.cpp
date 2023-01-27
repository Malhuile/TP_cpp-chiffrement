#include "caesar2.h"

void Caesar2::encode(int decalage) {
    std::string messageChiffre = "";
    for (unsigned int i = 0; i < _plain.length(); i++) {
        char lettre = _plain[i];
        lettre = lettre + decalage;
        messageChiffre += lettre;
    }
    _plain = messageChiffre;
}

void Caesar2::decode(int decalage) {
    std::string message = "";
    for (unsigned int i = 0; i < _cypher.length(); i++) {
        char lettre = _cypher[i];
        lettre = lettre - decalage;
        message += lettre;
    }
    _cypher = message;
}

std::string Caesar2::getCypher() {
    return _cypher;
}

std::string Caesar2::getPlain() {
    return _plain;
}