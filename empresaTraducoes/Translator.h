#ifndef TRANSLATOR_H
#define TRANSLATOR_H

#include <iostream>
#include <string>
#include <vector>

#include "Order.h"

class Translator{
public:
	std::string GetName() const;
	int GetYears() const;
	std::vector<std::string> GetLanguages();
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