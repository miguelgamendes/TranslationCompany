#ifndef TEXT_H
#define TEXT_H

#include <string>

class Text{

	std::string identifier, originalLanguage;
	int nWords;

public:
	Text();
	Text(std::string identifier, std::string originalLanguage, int nWords);

	std::string getIdentifier();
	std::string getOriginalLanguage();
	int getNWords();

	void setIdentifier(std::string identifier);
	void setOriginalLanguage(std::string originalLanguage);
	void setNWords(int nWords);

	//int CalculateComplexity();
};

class TechnicalT: public Text{
protected:
	std::string specialty;
public: 
	TechnicalT(std::string identifier, std::string originalLanguage, int nWords, std::string specialty);
	
	std::string getSpecialty();
	void setSpecialty(std::string specialty);
};

class LiteraryT: public Text{
protected:
	std::string author, title;
public:
	LiteraryT(std::string identifier, std::string originalLanguage, int nWords, std::string author, std::string title);
	
	std::string getAuthor();
	std::string getTitle();
	
	void setAuthor(std::string author);
	void setTitle(std::string title);
};

class NewsT: public Text{
protected:
	std::string subject, type;
public:
	NewsT(std::string identifier, std::string originalLanguage, int nWords, std::string subject, std::string type);

	std::string getSubject();
	std::string getType();

	void setSubject(std::string subject);
	void setType(std::string type);
};


class PoetryT: public LiteraryT{
private:
	int nBlocks;
public:
	PoetryT(std::string identifier, std::string originalLanguage, int nWords, std::string author, std::string title, int nBlocks);
	
	int getNBlocks();
	void setNBlocks(int nBlocks);
};

class ProseT: public LiteraryT{
private:
	int nPages;
public:
	ProseT(std::string identifier, std::string originalLanguage, int nWords, std::string author, std::string title, int nPages);
	
	int getNPages();
	void setNPages(int nPages);
};

#endif