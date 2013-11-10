#include "technicalTrans.h"


TechnicalTrans::TechnicalTrans(){
	this->yearsExp = 0;
	this->name = "Desconhecido";
}

TechnicalTrans::TechnicalTrans(int years, std::string name, std::string domain) : Translator(years, name){
	this->domain = domain;
}

//int TechnicalTrans::EstimateTransTime(TechnicalT text){
//}