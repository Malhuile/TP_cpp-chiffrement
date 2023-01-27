#include <iostream>
#include "basicEncrypt.h"
#include "caesar.h"
#include "caesar2.h"
#include "vigenere.h"

void main() {
	Caesar ca("ratio","sbujp");
	ca.encode(3);
	ca.decode(1);
	std::cout << ca.getPlain() << std::endl;
	std::cout << ca.getCypher() << std::endl;

	Caesar2 ca2("yo34.feur", "{q560hgwt");
	ca2.encode(2);
	ca2.decode(2);

	std::cout << ca2.getPlain() << std::endl;
	std::cout << ca2.getCypher() << std::endl;

	Vigenere vi("yolazone", "poeinfnx");
	vi.encode("ratio");
	vi.decode("ratio");
	std::cout << vi.getPlain() << std::endl;
	std::cout << vi.getCypher() << std::endl;
}