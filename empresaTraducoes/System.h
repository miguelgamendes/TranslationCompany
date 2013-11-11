#ifndef SYSTEM_H
#define SYSTEM_H

#include "Translator.h"
#include "Order.h"

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
	void AddTranslator(std::string spec);
	void AddOrder();
	void EliminateTranslator(std::string name);
private:
	std::vector<Translator> translators;
	std::vector<Order> orders;
};

#endif