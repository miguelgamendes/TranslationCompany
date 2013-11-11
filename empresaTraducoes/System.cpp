#include "System.h"

void System::SaveToFile(){
	std::ofstream ofile("data.csv", std::ios::out);

	if(!ofile){
		std::cout << "Failed to open file for output." << std::endl;
		system("PAUSE");
		exit(1);
	}

	for(unsigned int i = 0; i < this->translators.size(); i++){
		ofile << this->translators[i].GetName() << " " << this->translators[i].GetYears();
	}

	ofile.close();

	std::cout << "File data saved successfully." << std::endl << std::endl;
}

void System::LoadFromFile(){
	int years;
	std::string sig, name, s_years;
	std::ifstream ifile("data.csv", std::ios::in);

	if(!ifile){
		std::cout << "Failed to open file for input." << std::endl;
		system("PAUSE");
		exit(1);
	}

	while(ifile.good()){
		ifile >> sig >> name >> s_years;
		years = atoi(s_years.c_str());
		Translator t(years, name);
		this->translators.push_back(t);
	}

	ifile.close();

	std::cout << "File data loaded successfully." << std::endl << std::endl;
	//char currline[200];
	//std::string temp;
	//int index = 0;
	//
	//if(!ifile){
	//	std::cout << "Failed to open file for input." << std::endl;
	//	system("PAUSE");
	//	exit(1);
	//}
	//
	//for(unsigned int i = 0; i < this->translators.size(); i++){
	//	ifile.getline(temp, 200, '\n');
	//	for(unsigned int j = 0; j < 200; j++){
	//		if(currline[j] != ';'){
	//			temp.append(currline[j]);
	//			index++;
	//		}
	//	}
	//}
}

void System::DisplayTranslators(){
	for(unsigned int i = 0; i < this->translators.size(); i++)
		std::cout << std::left << std::setw(20) << this->translators[i].GetName() << std::setw(2) << this->translators[i].GetYears() << std::endl;
	system("PAUSE");
}

void System::DisplayOrders(){
	for(unsigned int i = 0; i < this->orders.size(); i++)
		std::cout << this->orders[i].getMaximumDuration() << this->orders[i].getFinalLanguage() << std::endl;
	system("PAUSE");
}

void System::AddTranslator(int years, std::string name, std::string type, std::string spec){
	std::string language;
	if(spec == "news"){
		NewsTrans nt(years, name, type);
		this->translators.push_back(nt);
		std::cout << "Quais as linguas que este tradutor domina?" << std::endl << ">";
		std::cin >> language;
		while(language.length() != 0)
			this->translators[this->translators.size()-1].GetLanguages().push_back(language);
	}else if(spec == "tech"){
		TechnicalTrans tt(years, name, type);
		this->translators.push_back(tt);
		std::cout << "Quais as linguas que este tradutor domina?" << std::endl << ">";
		std::cin >> language;
		while(language.length() != 0)
			this->translators[this->translators.size()-1].GetLanguages().push_back(language);
	}else if(spec == "lit"){
		LiteraryTrans lt(years, name, type);
		this->translators.push_back(lt);
		std::cout << "Quais as linguas que este tradutor domina?" << std::endl << ">";
		std::cin >> language;
		while(language.length() != 0)
			this->translators[this->translators.size()-1].GetLanguages().push_back(language);
	}
}

void System::AddOrder(std::string id, std::string originalLanguage, std::string finalLanguage, int max, int nWords, std::string author, std::string subject, int blocks, std::string spec){
	if(spec == "news"){
		NewsT lt(id, originalLanguage, nWords, author, subject);
		Order o(lt, finalLanguage, max);
		this->orders.push_back(o);
	}else if(spec == "tech"){
		TechnicalT tt(id, originalLanguage, nWords, subject);
		Order o(tt, finalLanguage, max);
		this->orders.push_back(o);
	}else if(spec == "poetry"){
		PoetryT pt(id, originalLanguage, nWords, author, subject, blocks);
		Order o(pt, finalLanguage, max);
		this->orders.push_back(o);
	}else if(spec == "prose"){
		ProseT pt(id, originalLanguage, nWords, author, subject, blocks);
		Order o(pt, finalLanguage, max);
		this->orders.push_back(o);
	}
}

void System::EliminateTranslator(std::string name){
	for(unsigned int i = 0; i < this->translators.size(); i++)
		if(name == this->translators[i].GetName())
			this->translators.erase(this->translators.begin() + i);
}