#ifndef TRANSLATOR_H
#define TRANSLATOR_H

#include <iostream>
#include <string>
#include <vector>

//#include "text.h"

class Translator{
public:
	std::string GetName() const;
	int GetYears() const;
	void SetName(std::string name);
	void SetYears(int years);
	//virtual int EstimateTransTime() const;
	//float CalculateCost() const;

	Translator();
	Translator(int years, std::string name);

protected:
	int yearsExp;
	std::string name;
	std::vector<std::string> languages;
};

#endif