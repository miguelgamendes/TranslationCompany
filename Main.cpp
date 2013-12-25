#include "System.h"

int DisplayMenu();
int AddMenu();
int AddTranslatorMenu();
int AddOrderMenu();
int EditMenu();
int EditTranslatorMenu();
System transforma;

int main() {
	while (true) {
		std::string choicet;
		char choice;
		do {
			system("CLS");
			std::cout << "###################################" << std::endl;
			std::cout << "#                                 #" << std::endl;
			std::cout << "#      Traducoes Trans-forma      #" << std::endl;
			std::cout << "#                                 #" << std::endl;
			std::cout << "###################################" << std::endl;

			std::cout << std::endl << std::endl << "a) Display..." << std::endl;
			std::cout << "b) Adicionar..." << std::endl;
			std::cout << "c) Editar..." << std::endl;
			std::cout << "d) Remover..." << std::endl;
			std::cout << "q) Sair" << std::endl << std::endl;
			std::cout << "Input: ";

			std::cin >> choicet;
		} while (choicet.length() != 1);
		choice = tolower(choicet[0]);
		switch (choice) {
		case 'a':
			DisplayMenu();
			break;
		case 'b':
			AddMenu();
			break;
		case 'c':
			EditMenu();
			break;
		case 'q':
			return 0;
			break;
		default:
			break;
		}
	}
}

int DisplayMenu() {
	while (true) {
		std::string choicet;
		char choice;
		do {
			system("CLS");
			std::cout << "###################################" << std::endl;
			std::cout << "#                                 #" << std::endl;
			std::cout << "#         Menu de Display         #" << std::endl;
			std::cout << "#                                 #" << std::endl;
			std::cout << "###################################" << std::endl;

			std::cout << std::endl << std::endl << "a) Display tradutores" << std::endl;
			std::cout << "b) Display encomendas" << std::endl;
			std::cout << "q) Voltar ao menu principal" << std::endl << std::endl;
			std::cout << "Input: ";

			std::cin >> choicet;
		} while (choicet.length() != 1);
		choice = tolower(choicet[0]);
		switch (choice) {
		case 'a':
			transforma.DisplayTranslators();
			break;
		case 'b':
			transforma.DisplayOrders();
			break;
		case 'q':
			return 0;
			break;
		default:
			break;
		}
	}
}

int AddMenu() {
	while (true) {
		std::string choicet;
		char choice;
		do {
			system("CLS");
			std::cout << "###################################" << std::endl;
			std::cout << "#                                 #" << std::endl;
			std::cout << "#         Menu de Adicao          #" << std::endl;
			std::cout << "#                                 #" << std::endl;
			std::cout << "###################################" << std::endl;

			std::cout << std::endl << std::endl << "a) Adicionar tradutores" << std::endl;
			std::cout << "b) Adicionar encomendas" << std::endl;
			std::cout << "q) Voltar ao menu principal" << std::endl << std::endl;
			std::cout << "Input: ";

			std::cin >> choicet;
		} while (choicet.length() != 1);
		choice = tolower(choicet[0]);
		switch (choice) {
		case 'a':
			AddTranslatorMenu();
			break;
		case 'b':
			AddOrderMenu();
			break;
		case 'q':
			return 0;
			break;
		default:
			break;
		}
	}
}

int AddTranslatorMenu() {
	while (true) {
		std::string choicet;
		char choice;
		do {
			system("CLS");
			std::cout << "###################################" << std::endl;
			std::cout << "#                                 #" << std::endl;
			std::cout << "#        Adicionar tradutor       #" << std::endl;
			std::cout << "#                                 #" << std::endl;
			std::cout << "###################################" << std::endl;

			std::cout << std::endl << std::endl << "a) Tradutor literario" << std::endl;
			std::cout << "b) Tradutor tecnico" << std::endl;
			std::cout << "c) Tradutor noticioso" << std::endl;
			std::cout << "q) Voltar ao menu de adicao" << std::endl << std::endl;
			std::cout << "Input: ";

			std::cin >> choicet;
		} while (choicet.length() != 1);
		choice = tolower(choicet[0]);
		int clear = 1;
		int years;
		std::string name, type;
		switch (choice) {
		case 'a':
			std::cout << "Anos de experiencia: ";
			std::cin >> years;
			std::cout << "Nome: ";
			std::cin >> name;
			do {
				std::cout << "Tipo (\"prosa\" ou \"poesia\"): ";
				std::cin >> type;
				if ((type == "poesia") || (type == "prosa"))
					clear = 0;
			} while (clear != 0);
			transforma.AddTranslator(years, name, type, "lit");
			transforma.SaveToFile();
			break;
		case 'b':
			std::cout << "Anos de experiencia: ";
			std::cin >> years;
			std::cout << "Nome: ";
			std::cin >> name;
			std::cout << "Dominio: ";
			std::cin >> type;
			transforma.AddTranslator(years, name, type, "tech");
			transforma.SaveToFile();
			break;
		case 'c':
			std::cout << "Anos de experiencia: ";
			std::cin >> years;
			std::cout << "Nome: ";
			std::cin >> name;
			do {
				std::cout << "Tipo (\"diario\" ou \"semanario\"): ";
				std::cin >> type;
				if ((type == "diario") || (type == "semanario"))
					clear = 0;
			} while (clear != 0);
			transforma.AddTranslator(years, name, type, "news");
			transforma.SaveToFile();
			break;
		case 'q':
			return 0;
			break;
		default:
			break;
		}

	}
}

int AddOrderMenu() {
	while (true) {
		std::string choicet;
		char choice;
		do {
			system("CLS");
			std::cout << "###################################" << std::endl;
			std::cout << "#                                 #" << std::endl;
			std::cout << "#       Adicionar encomenda       #" << std::endl;
			std::cout << "#                                 #" << std::endl;
			std::cout << "###################################" << std::endl;

			std::cout << std::endl << std::endl << "a) Adicionar encomenda de texto em prosa" << std::endl;
			std::cout << "b) Adicionar encomenda de texto poetico" << std::endl;
			std::cout << "c) Adicionar encomenda de texto tecnico" << std::endl;
			std::cout << "d) Adicionar encomenda de texto noticioso" << std::endl;
			std::cout << "q) Voltar ao menu principal" << std::endl << std::endl;
			std::cout << "Input: ";

			std::cin >> choicet;
		} while (choicet.length() != 1);
		choice = tolower(choicet[0]);
		int clear = 1; //ASDASSDASD
		std::string id, originalLanguage, finalLanguage, author, subject, spec;
		int max, nWords, blocks;
		switch (choice) {
		case 'a':
			std::cout << "Linguagem do texto: ";
			std::cin >> originalLanguage;
			std::cout << "Linguage destino: ";
			std::cin >> finalLanguage;
			std::cout << "Titulo do livro: ";
			std::cin >> subject;
			std::cout << "Autor: ";
			std::cin >> author;
			std::cout << "Numero de palavras: ";
			std::cin >> nWords;
			std::cout << "Prazo da encomenda (min): ";
			std::cin >> max;
			transforma.AddOrder("L01", originalLanguage, finalLanguage, max, nWords, author, subject, 0, "prose");
			break;
		case 'q':
			return 0;
			break;
		default:
			break;
		}
	}
}

int EditMenu() {
	while (true) {
		std::string choicet;
		char choice;
		do {
			system("CLS");
			std::cout << "###################################" << std::endl;
			std::cout << "#                                 #" << std::endl;
			std::cout << "#         Menu de Edicao          #" << std::endl;
			std::cout << "#                                 #" << std::endl;
			std::cout << "###################################" << std::endl;

			std::cout << std::endl << std::endl << "a) Editar tradutor" << std::endl;
			std::cout << "b) Editar encomenda" << std::endl;
			std::cout << "q) Voltar ao menu principal" << std::endl << std::endl;
			std::cout << "Input: ";

			std::cin >> choicet;
		} while (choicet.length() != 1);
		choice = tolower(choicet[0]);
		switch (choice) {
		case 'a':
			EditTranslatorMenu();
			break;
		case 'b':
			break;
		case 'q':
			return 0;
			break;
		default:
			break;
		}
	}
}

int EditTranslatorMenu() {
	while (true) {
		std::string choicet;
		char choice;
		do {
			system("CLS");
			std::cout << "###################################" << std::endl;
			std::cout << "#                                 #" << std::endl;
			std::cout << "#         Editar Tradutor         #" << std::endl;
			std::cout << "#                                 #" << std::endl;
			std::cout << "###################################" << std::endl;

			std::cout << std::endl << std::endl << "a) Editar nome" << std::endl;
			std::cout << "b) Editar anos de experiencia" << std::endl;
			std::cout << "q) Voltar ao menu principal" << std::endl << std::endl;
			std::cout << "Input: ";

			std::cin >> choicet;
		} while (choicet.length() != 1);
		choice = tolower(choicet[0]);
		switch (choice) {
		case 'a':
			transforma.EditTranslator("name");
			transforma.SaveToFile();
			break;
		case 'b':
			transforma.EditTranslator("years");
			transforma.SaveToFile();
			break;
		case 'q':
			return 0;
			break;
		default:
			break;
		}
	}
}