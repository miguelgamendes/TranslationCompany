#include "translator.h"
#include "LiteraryTrans.h"
#include "NewsTrans.h"
#include "technicalTrans.h"
#include "System.h"

int main(){
	System obama; //cause he's in charge of everything
	bool userWantsOut = false;
	char choice;

	std::cout << "###################################" << std::endl;
	std::cout << "#                                 #" << std::endl;
	std::cout << "#    EMPRESA DE TRADUCOES 9001    #" << std::endl;
	std::cout << "#                                 #" << std::endl;
	std::cout << "###################################" << std::endl;

	while(!userWantsOut){
		//obama.LoadFromFile();

		std::cout << "O que pretende gerir? (X para sair)" << std::endl;
		std::cout << "\tA - Gerir tradutores" << std::endl;
		std::cout << "\tB - Gerir encomendas" << std::endl << std::endl;
		std::cout << ">";
		std::cin >> choice;

		switch(choice){
			bool back = false;

			case 'A':
			case 'a':
				while(!back){
					std::cout << "O que pretende fazer? (X para regressar)" << std::endl;
					std::cout << "\tA - Visualizar tradutores" << std::endl;
					std::cout << "\tB - Adicionar tradutor" << std::endl;
					std::cout << "\tC - Eliminar tradutor" << std::endl << std::endl;
					std::cout << ">";
					std::cin >> choice;

					switch(choice){
						case 'A':
						case 'a':
							obama.DisplayTranslators();
							break;
						case 'B':
						case 'b':
							{
								std::string name;
								int years;

								std::cout << "Que tipo de tradutor deseja adicionar?";
								std::cout << "\t1 - Técnico" << std::endl;
								std::cout << "\t2 - Noticioso" << std::endl;
								std::cout << "\t3 - Literario" << std::endl << std::endl;
								std::cout << ">";
								std::cin >> choice;

								switch(choice)
							}
							break;
						case 'C':
						case 'c':
							{
								std::string name;
								system("CLS");
								std::cout << "Especifique o nome do tradutor que deseja eliminar:" << std::endl;
								std::cout << ">";
								std::cin >> name;
								obama.EliminateTranslator(name);
							}
							break;
						case 'X':
						case 'x':
							back = true;
						default:
							break;
					}
				}
				break;
			case 'B':
			case 'b':
				//order ops
				break;
			case 'X':
			case 'x':
				userWantsOut = true;
				break;
			default:
				break;
		}

		//obama.SaveToFile();
		system("CLS");
	}

	return 0;
}