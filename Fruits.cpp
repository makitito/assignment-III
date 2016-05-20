#include <iostream>

#include "Methods.h"
#include "Lemon.h"
#include "Orange.h"

int main() {
	Lemon lemon(2.0);
	//This is perfectly legal!
	CitrusFruit &rlemon = lemon;
	PrintTheFruits(rlemon);
	Orange chungwa(1.0);
	CitrusFruit &rchungwa = chungwa;
	PrintTheFruits(rchungwa);
	PrintArray();
	return 0;
}