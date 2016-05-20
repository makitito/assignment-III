#ifndef CITRUSFRUIT_H
#define CITRUSFRUIT_H

class CitrusFruit {

protected:

	float ph;

public:

	CitrusFruit(float ph) : ph(ph) {}

	virtual const char * getName();

	virtual float getPh();

};

#endif;