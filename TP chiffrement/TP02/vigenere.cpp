#include "vigenere.h"


void Vigenere::encode(std::string cle) {
    std::string messageChiffre = "";
    for (unsigned int i = 0, j = 0; i < _plain.length(); i++, j = (j + 1) % cle.length()) {
        char lettre = _plain[i];
        if (isalpha(lettre)) {
            if (isupper(lettre)) {
                lettre = ((lettre - 'A') + (cle[j] - 'A')) % 26 + 'A';
            }
            else {
                lettre = ((lettre - 'a') + (cle[j] - 'a')) % 26 + 'a';
            }
        }
        messageChiffre += lettre;
    }
    _plain = messageChiffre;
}

void Vigenere::decode(std::string cle) {
    std::string message = "";
    for (unsigned int i = 0, j = 0; i < _cypher.length(); i++, j = (j + 1) % cle.length()) {
        char lettre = _cypher[i];
        if (isalpha(lettre)) {
            if (isupper(lettre)) {
                lettre = ((lettre - 'A') - (cle[j] - 'A') + 26) % 26 + 'A';
            }
            else {
                lettre = ((lettre - 'a') - (cle[j] - 'a') + 26) % 26 + 'a';
            }
        }
        message += lettre;
    }
    _cypher = message;
}

std::string Vigenere::getCypher() {
    return _cypher;
}

std::string Vigenere::getPlain() {
    return _plain;
}