#ifndef FOUNTAINPEN_H
#define FOUNTAINPEN_H

#include <iostream>

#include <string>

#include "Pen.h"

class FountainPen : public Pen {
	
		FountainPen(std::string pen_name) : Pen(pen_name) {}
		public: FountainPen() : Pen(std::string("FountainPen")){}

		std::string drawLine();

		std::string drawCircle();

	};

		std::string FountainPen::drawLine(){return getName().append(" draws a line.");}

		std::string FountainPen::drawCircle(){return getName().append(" draws a circle.");}
