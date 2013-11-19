#ifndef TRANSLATOR_H
#define TRANSLATOR_H

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <fstream>

#include "Order.h"

class Translator{
public:
	std::string GetName() const;
	int GetYears() const;
	std::vector<std::string> GetLanguages();
	void SetName(std::string name);
	void SetYears(int years);
	void AddLanguage(std::string lang);
	//virtual int EstimateTransTime(Text text) const;
	//float CalculateCost(Order order) const;
	virtual void SaveInfo(std::ofstream &ostream);
	virtual void Display();

	Translator();
	Translator(int years, std::string name);

protected:
	int yearsExp;
	std::string name;
	std::vector<std::string> languages;
};

#endif