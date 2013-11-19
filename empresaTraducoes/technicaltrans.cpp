#include "technicalTrans.h"

TechnicalTrans::TechnicalTrans(int years, std::string name, std::string domain) : Translator(years, name){
	this->domain = domain;
}

void TechnicalTrans::SaveInfo(std::ofstream &ostream){
	ostream << name << ";" << yearsExp << ";" << domain;
	for(unsigned int i = 0; i < languages.size(); i++)
		ostream << ";" << languages[i];
	ostream << std::endl;
}

void TechnicalTrans::Display(){
	std::cout << "Nome: " << std::left << std::setw(20) << name << "Anos de exp.: " << std::setw(3) << yearsExp << "Dominio: " << std::setw(10) << domain << std::endl;
	std::cout << "Linguas:";
	for(unsigned int i = 0; i < languages.size(); i++){
		std::cout << " " << languages[i];
	}
	std::cout << std::endl << std::endl;
}

//int TechnicalTrans::EstimateTransTime(TechnicalT text){
//}