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

LiteraryTrans::LiteraryTrans(int years, std::string name, std::string type) : Translator(years, name){
	this->type = type;
}

void LiteraryTrans::SaveInfo(std::ofstream &ostream){
	ostream << name << ";" << yearsExp << ";" << type;
	for (unsigned int i = 0; i < languages.size(); i++)
		ostream << ";" << languages[i];
	ostream << std::endl;
}

void LiteraryTrans::Display(){
	std::cout << "Nome: " << std::left << std::setw(20) << name << "Anos de exp.: " << std::setw(3) << yearsExp << "Tipo: " << std::setw(10) << type << std::endl;
	std::cout << "Linguas:";
	for (unsigned int i = 0; i < languages.size(); i++){
		std::cout << " " << languages[i];
	}
	std::cout << std::endl << std::endl;
}

NewsTrans::NewsTrans(int years, std::string name, std::string type) : Translator(years, name){
	this->type = type;
}

void NewsTrans::SaveInfo(std::ofstream &ostream){
	ostream << name << ";" << yearsExp << ";" << type;
	std::cout << languages.size();
	system("PAUSE");
	for (unsigned int i = 0; i < languages.size(); i++){
		std::cout << "test";
		ostream << ";" << languages[i];
	}
	ostream << std::endl;
}

void NewsTrans::Display(){
	std::cout << "Nome: " << std::left << std::setw(20) << name << "Anos de exp.: " << std::setw(3) << yearsExp << "Tipo: " << std::setw(10) << type << std::endl;
	std::cout << "Linguas:";
	for (unsigned int i = 0; i < languages.size(); i++){
		std::cout << " " << languages[i];
	}
	std::cout << std::endl << std::endl;
}

TechnicalTrans::TechnicalTrans(int years, std::string name, std::string domain) : Translator(years, name){
	this->domain = domain;
}

void TechnicalTrans::SaveInfo(std::ofstream &ostream){
	ostream << name << ";" << yearsExp << ";" << domain;
	for (unsigned int i = 0; i < languages.size(); i++)
		ostream << ";" << languages[i];
	ostream << std::endl;
}

void TechnicalTrans::Display(){
	std::cout << "Nome: " << std::left << std::setw(20) << name << "Anos de exp.: " << std::setw(3) << yearsExp << "Dominio: " << std::setw(10) << domain << std::endl;
	std::cout << "Linguas:";
	for (unsigned int i = 0; i < languages.size(); i++){
		std::cout << " " << languages[i];
	}
	std::cout << std::endl << std::endl;
}