#include "System.h"

void System::SaveToFile(){
	std::ofstream ofile("data.csv", std::ios::out);

	if(!ofile){
		std::cout << "Failed to open file for output." << std::endl;
		system("PAUSE");
		exit(1);
	}

	for(unsigned int i = 0; i < this->translators.size(); i++){
		ofile << this->translators[i].GetName() << ";" << this->translators[i].GetYears();
	}
}