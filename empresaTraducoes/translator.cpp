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

std::vector<std::string> Translator::GetLanguages(){
	return languages;
}

void Translator::SetName(std::string name){
	this->name = name;
}

void Translator::SetYears(int years){
	yearsExp = years;
}

void Translator::AddLanguage(std::string lang){
	languages.push_back(lang);
}

void Translator::SaveInfo(std::ofstream &ostream){
	ostream << name << ";" << yearsExp << ";" << std::endl;
}

void Translator::Display(){
	std::cout << "Nome: " << std::left << std::setw(20) << name << "Anos de exp.: " << std::setw(2) << yearsExp << std::endl;
}