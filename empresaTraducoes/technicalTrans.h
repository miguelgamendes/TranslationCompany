#ifndef TECHNICALTRANS_H
#define TECHNICALTRANS_H

#include <string>

#include "translator.h"
//#include "text.h"

class TechnicalTrans : public Translator{
public:
	TechnicalTrans();
	TechnicalTrans(int years, std::string name, std::string subject);
	//int EstimateTransTime(TechnicalT text);
private:
	std::string domain;
};

#endif