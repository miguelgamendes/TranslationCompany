#ifndef TECHNICALTRANS_H
#define TECHNICALTRANS_H

#include <string>

#include "translator.h"
//#include "text.h"

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