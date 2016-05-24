#ifndef PEN_H
#define PEN_H

#include <string>

class Pen {

	std::string pen_name;

	public:

	Pen(std::string pen_name = "Pen"){
					this->pen_name = pen_name;}

	std::string getName(){return pen_name;}

	std::string drawLine();

	std::string drawCircle();

	};

	std::string Pen::drawLine(){return getName().append(" draws a line.");}

	std::string Pen::drawCircle(){return getName().append(" draws a circle.");}

#endif