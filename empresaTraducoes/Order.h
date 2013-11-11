#ifndef ORDER_H
#define ORDER_H

#include "Text.h"

#include <string>

class Order{
private:
	Text text;
	std::string finalLanguage;
	int maximumDuration;

public:
	Order(Text text, std::string finalLanguage, int maximumDuration);
	std::string getFinalLanguage();
	int getMaximumDuration();
	void setFinalLanguage(std::string finalLanguage);
	void setMaximumDuration(int maximumDuration);
};

#endif