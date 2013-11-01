#ifndef LITERARYTRANS_H
#define LITERARYTRANS_H

#include "translator.h"

#include <string>

class LiteraryTrans : public Translator{
public:
	LiteraryTrans(std::string type);
private:
	std::string type;
};

#endif