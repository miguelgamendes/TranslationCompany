#ifndef LITERARYTRANS_H
#define LITERARYTRANS_H

#include "translator.h"

#include <string>

class LiteraryTrans : public Translator{
public:
	LiteraryTrans(int years, std::string name, std::string type);
	void SaveInfo(std::ofstream &ostream);
	void Display();
private:
	std::string type;
};

#endif