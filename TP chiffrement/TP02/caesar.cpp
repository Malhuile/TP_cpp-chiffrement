#include <iostream>
#include "caesar.h"

void Caesar::encode(int decalage) {
    std::string messageChiffre = "";
    for (unsigned int i = 0; i < _plain.length(); i++) {
        char lettre = _plain[i];
        if (isalpha(lettre)) {
            if (isupper(lettre)) {
                lettre = ((lettre - 'A') + decalage) % 26 + 'A';
            }
            else {
                lettre = ((lettre - 'a') + decalage) % 26 + 'a';
            }
        }
        messageChiffre += lettre;
    }
    _plain = messageChiffre;
}

void Caesar::decode(int decalage) {
    std::string message = "";
    for (unsigned int i = 0; i < _cypher.length(); i++) {
        char lettre = _cypher[i];
        if (isalpha(lettre)) {
            if (isupper(lettre)) {
                lettre = ((lettre - 'A') - decalage + 26) % 26 + 'A';
            }
            else {
                lettre = ((lettre - 'a') - decalage + 26) % 26 + 'a';
            }
        }
        message += lettre;
    }
    _cypher = message;
}

std::string Caesar::getCypher() {
    return _cypher;
}

std::string Caesar::getPlain() {
    return _plain;
}