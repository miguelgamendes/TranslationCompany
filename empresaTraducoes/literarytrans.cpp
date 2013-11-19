#include "LiteraryTrans.h"

LiteraryTrans::LiteraryTrans(int years, std::string name, std::string type) : Translator(years, name){
	this->type = type;
}

void LiteraryTrans::SaveInfo(std::ofstream &ostream){
	ostream << name << ";" << yearsExp << ";" << type;
	for(unsigned int i = 0; i < languages.size(); i++)
		ostream << ";" << languages[i];
	ostream << std::endl;
}

void LiteraryTrans::Display(){
	std::cout << "Nome: " << std::left << std::setw(20) << name << "Anos de exp.: " << std::setw(3) << yearsExp << "Tipo: " << std::setw(10) << type << std::endl;
	std::cout << "Linguas:";
	for(unsigned int i = 0; i < languages.size(); i++){
		std::cout << " " << languages[i];
	}
	std::cout << std::endl << std::endl;
}