#include "NewsTrans.h"

NewsTrans::NewsTrans(int years, std::string name, std::string type) : Translator(years, name){
	this->type = type;
}