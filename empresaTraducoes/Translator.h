#ifndef TRANSLATOR_H
#define TRANSLATOR_H

#include <iostream>
#include <string>

#include "text.h"
#include "technicalTrans.h"
#include "literarytrans.h"
#include "newstrans.h"

class Translator{
public:
	virtual int EstimateTransTime() const;
	float CalculateCost() const;

	explicit Translator();
	explicit Translator(int years, std::string name);

protected:
	int yearsExp;
	std::string name;
	vector<std::string> languages;
};

#endif