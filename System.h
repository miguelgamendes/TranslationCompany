#ifndef SYSTEM_H
#define SYSTEM_H

#include "Translator.h"
#include "Order.h"
#include "Text.h"

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <vector>
#include <cstdlib>

class System{
public:
	void SaveToFile();
	void LoadFromFile();
	void DisplayTranslators();
	void DisplayOrders();
	void AddTranslator(int years, std::string name, std::string type, std::string spec);
	void AddOrder(std::string id, std::string originalLanguage, std::string finalLanguage, int max, int nWords, std::string author, std::string subject, int blocks, std::string spec);
	void EliminateTranslator(std::string name);
	void EditTranslator(std::string element);
private:
	std::vector<Translator *> translators;
	std::vector<Order> orders; //MUDAR PARA *(Pointer) E MUDAR CODIGO AddOrder
};

#endif