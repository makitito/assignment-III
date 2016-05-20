#ifndef ORANGE_H
#define ORANGE_H

#include "Citrusfruit.h"

class Orange : public CitrusFruit {

public:

	Orange(float ph) : CitrusFruit(ph) {}

	virtual const char * getName();
	virtual float getPh();

};

#endif
