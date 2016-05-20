#include <iostream>

#include "Methods.h"
#include "Lemon.h"
#include "Orange.h"

void PrintTheFruits(CitrusFruit &fruit) { //&fruit is a ref to the super class

	std::cout << "fruit is a " << fruit.getName()
		<< " and has a pH " << fruit.getPh() 
		<< std::endl;

}

void PrintArray() {
	Lemon le1(1.4), le2(1.5), le3(1.234);
	Orange or1(0.4), or2(0.3), or3(0.5);
	CitrusFruit *cfruits[] = { &le1, &le2, &le3, &or1, &or2, &or3 }; //array & not ref coz not used in declaration

	for (int i = 0; i < 6; i++)
		PrintTheFruits(*(cfruits[i]));
}
