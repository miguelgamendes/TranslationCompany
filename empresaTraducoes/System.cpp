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
}

void System::LoadFromFile(){
	int years;
	std::string name, s_years;
	std::ifstream ifile("data.csv", std::ios::in);

	if(!ifile){
		std::cout << "Failed to open file for input." << std::endl;
		system("PAUSE");
		exit(1);
	}

	while(ifile.good()){
		ifile >> name >> s_years;
		years = atoi(s_years.c_str());
		Translator t(years, name);
		this->translators.push_back(t);
	}

	ifile.close();
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