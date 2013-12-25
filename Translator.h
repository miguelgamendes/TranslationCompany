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

class LiteraryTrans : public Translator{
public:
	LiteraryTrans(int years, std::string name, std::string type);
	void SaveInfo(std::ofstream &ostream);
	void Display();
private:
	std::string type;
};

class NewsTrans : public Translator{
public:
	NewsTrans(int years, std::string name, std::string type);
	void SaveInfo(std::ofstream &ostream);
	void Display();
private:
	std::string type;
};

class TechnicalTrans : public Translator{
public:
	TechnicalTrans(int years, std::string name, std::string subject);
	void SaveInfo(std::ofstream &ostream);
	void Display();
	//int EstimateTransTime(TechnicalT text);
private:
	std::string domain;
};

#endif