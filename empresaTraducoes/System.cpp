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
}

void System::DisplayOrders(){
	for(unsigned int i = 0; i < this->orders.size(); i++)
		std::cout << this->orders[i].getMaximumDuration() << this->orders[i].getFinalLanguage() << std::endl;
}

void System::EliminateTranslator(std::string name){
	for(unsigned int i = 0; i < this->translators.size(); i++)
		if(name == this->translators[i].GetName())
			this->translators.erase(this->translators.begin() + i);
}