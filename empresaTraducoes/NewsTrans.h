#ifndef NEWSTRANS_H
#define NEWSTRANS_H

#include "translator.h"

#include <string>

class NewsTrans : public Translator{
public:
	NewsTrans(int years, std::string name, std::string type);
private:
	std::string type;
};

#endif NEWSTRANS_H