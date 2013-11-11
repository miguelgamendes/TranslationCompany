#include "Order.h"

Order::Order(Text text, std::string finalLanguage, int maximumDuration){
	this->text = text;
	this->finalLanguage = finalLanguage;
	this->maximumDuration = maximumDuration;
};

std::string Order::getFinalLanguage(){
	return finalLanguage;
}

int Order::getMaximumDuration(){
	return maximumDuration;
}

void Order::setFinalLanguage(std::string finalLanguage){
	this->finalLanguage = finalLanguage;
}

void Order::setMaximumDuration(int maximumDuration){
	this->maximumDuration = maximumDuration;
}