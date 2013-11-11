#include "Translator.h"

Translator::Translator(){
	this->yearsExp = 0;
	this->name = "Desconhecido";
}

Translator::Translator(int years, std::string name){
	this->yearsExp = years;
	this->name = name;
}

std::string Translator::GetName() const{
	return name;
}

int Translator::GetYears() const{
	return yearsExp;
}

void Translator::SetName(std::string name){
	this->name = name;
}