#include "Text.h"

Text::Text(){
	this->identifier = "ERR";
	this->originalLanguage = "OR";
	this->nWords = 0;
}

Text::Text(std::string identifier, std::string originalLanguage, int nWords){
	this->identifier = identifier;
	this->originalLanguage = originalLanguage;
	this->nWords = nWords;
}

std::string Text::getIdentifier()
{
	return identifier;
}

std::string Text::getOriginalLanguage()
{
	return originalLanguage;
}

int Text::getNWords()
{
	return nWords;
}

void Text::setIdentifier(std::string identifier)
{
	this->identifier = identifier;
}

void Text::setOriginalLanguage(std::string originalLanguage)
{
	this->originalLanguage = originalLanguage;
}

void Text::setNWords(int nWords)
{
	this->nWords = nWords;
}

//int Text::CalculateComplexity()
//{
//
//}

// TechnicalT

TechnicalT::TechnicalT(std::string identifier, std::string originalLanguage, int nWords, std::string specialty) : Text(identifier, originalLanguage, nWords){
	this->specialty = specialty;
}

std::string TechnicalT::getSpecialty()
{
	return specialty;
}

void TechnicalT::setSpecialty(std::string specialty)
{
	this->specialty = specialty;
}

// LiteraryT

LiteraryT::LiteraryT(std::string identifier, std::string originalLanguage, int nWords, std::string author, std::string title) : Text(identifier, originalLanguage, nWords){
	this->author = author;
	this->title = title;
}

std::string LiteraryT::getAuthor()
{
	return author;
}

std::string LiteraryT::getTitle()
{
	return title;
}

void LiteraryT::setAuthor(std::string author)
{
	this->author = author;
}

void LiteraryT::setTitle(std::string title)
{
	this->title = title;
}

// NewsT

NewsT::NewsT(std::string identifier, std::string originalLanguage, int nWords, std::string subject, std::string type) : Text(identifier, originalLanguage, nWords){
	this->subject = subject;
	this->type = type;
}

std::string NewsT::getSubject()
{
	return subject;
}

std::string NewsT::getType()
{
	return type;
}

void NewsT::setSubject(std::string subject)
{
	this->subject = subject;
}

void NewsT::setType(std::string type)
{
	this->type = type;
}

// PoetryT

PoetryT::PoetryT(std::string identifier, std::string originalLanguage, int nWords, std::string author, std::string title, int nBlocks) : LiteraryT(identifier, originalLanguage, nWords, author, title){
	this->nBlocks = nBlocks;
}

int PoetryT::getNBlocks()
{
	return nBlocks;
}

void PoetryT::setNBlocks(int NBlocks)
{
	this->nBlocks = nBlocks;
}

// ProseT

ProseT::ProseT(std::string identifier, std::string originalLanguage, int nWords, std::string author, std::string title, int nPages) : LiteraryT(identifier, originalLanguage, nWords, author, title){
	this->nPages = nPages;
}

int ProseT::getNPages()
{
	return nPages;
}

void ProseT::setNPages(int nPages)
{
	this->nPages = nPages;
}