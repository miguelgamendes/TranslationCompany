#ifndef SYSTEM_H
#define SYSTEM_H

#include "Translator.h"

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

class System{
public:
	std::vector<Translator> translators;
	void SaveToFile();
	void LoadFromFile();
private:
};

#endif