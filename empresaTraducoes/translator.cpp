#include "Translator.h"

Translator::Translator(){
	this->yearsExp = 0;
	this->name = "Desconhecido";
}

Translator::Translator(int years, std::string name){
	this->yearsExp = years;
	this->name = name;
}

std::string Translator::GetName(){
	return name;
}

int Translator::GetYears(){
	return yearsExp;
}