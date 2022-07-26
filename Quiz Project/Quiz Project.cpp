#include <iostream>
#include <vector>
#include <conio.h>
#include <fstream>
#include <string>
#include <Windows.h>
using namespace std;
int questionStaticId = 0;
int questioNumber = 14;
bool isGuest=false;
string username;
#include"Quiz.h"
#include"User.h"
#include"Admin.h"
#include"Guest.h"
#include "functions.h"

int main() {
	Admin a1{ "huseyn","hemidov","huseyn@gmail.com","huseyn123","huseyn112233" };
	string name, surname, password,phone,email;
	char option;
	while (true) {
		cout << "\t\t\t\t\t\t ______________________" << endl;
		cout << "\t\t\t\t\t\t|                      |" << endl;
		cout << "\t\t\t\t\t\t|  [1] Enter as User   |" << endl;
		cout << "\t\t\t\t\t\t|  [2] Enter as Admin  |" << endl;
		cout << "\t\t\t\t\t\t|  [3] Enter as Guest  |" << endl;
		cout << "\t\t\t\t\t\t|  [4] Exit            |" << endl;
		cout << "\t\t\t\t\t\t|                      |" << endl;
		cout << "\t\t\t\t\t\t ----------------------" << endl;
		option = _getch();
		switch (option) {
		case '4': {
			system("cls");
			cout << "\t\t\t\t\t\tDo you want exit program?";
			option = _getch();
			if (option == 13) {
				system("cls");
				cout << "\t\t\t" << R"( ______   ______   ______   _____      ______  __     _    ______   ||  ||  ||)" << endl;
				cout << "\t\t\t" << R"(| |      / |  | \ / |  | \ | | \ \    | |  | \ \ \   | |  | |       ||  ||  ||)" << endl;
				cout << "\t\t\t" << R"(| | ____ / |  | \ / |  | \ | |  \ \   | |  | \  \ \  | |  | |____   ||  ||  ||)" << endl;
				cout << "\t\t\t" << R"(| |  | | | |  | | | |  | | | |  | |   | |--| <   \_\_| |  | |----             )" << endl;
				cout << "\t\t\t" << R"(|_|__|_| \_|__|_/ \_|__|_/ |_|_/_/    |_|__|_/   ____|_|  |_|____   **  **  **)" << endl;
				exit(0);
			}
			else
				system("cls");

		}
				break;

		case '2': {
			system("cls");

			cout << "\t\t\t\t\t\tEnter username: ";
			cin >> username;
			cout << "\t\t\t\t\t\tEnter password: ";
			cin >> password;
			if (username == a1.getUsername() && password == a1.getPassword()) {
				cout << "\n\t\t\t\t\t\tAdmin login successfully!!!" << endl;
				Sleep(1500);
				system("cls");

				cout << "\t\t\t\t\t\t[1]Add question" << endl;
				cout << "\t\t\t\t\t\t[2]Play game" << endl;
				cout << "\t\t\t\t\t\t[3]Scoreboard" << endl;

				option = _getch();
				switch (option) {
				case '1': {
					try {
						addQuestion();
					}
					catch (char* ex) {
						cout << "Error -> " << ex << endl;
					}
				}
						break;

				case '3': {
					Questions();
					try {
						StartQuiz(isGuest);
					}
					catch (char* ex) {
						cout << "Error -> " << ex << endl;
					}
				}
						break;
				case '4': {
					try {
						LeaderBoard();
					}
					catch (char* ex) {
						cout << "Error -> " << ex << endl;
					}
					
				}
						break;

				default:
					system("cls");
					break;
				}



			}
			else {
				system("cls");
				throw exception("Invalid username or password !!!");
			}
		}
				break;
		case '1': {

			system("cls");
			cout << "\t\t\t\t\t\tEnter username: ";
			getline(cin, username);
			cout << "\t\t\t\t\t\tEnter password: ";
			getline(cin, password);
			cout << "\t\t\t\t\t\tEnter phone: ";
			getline(cin, phone);
			cout << "\t\t\t\t\t\tEnter email: ";
			getline(cin, email);

			cout << "\t\t\t\t\t\tLogin successfully!!!" << endl;
			Sleep(1500);
			system("cls");
			cout << "\t\t\t\t\t\t[1]Start quiz" << endl;
			cout << "\t\t\t\t\t\t[2]Scoreboard" << endl;
			option = _getch();
			switch (option) {
			case '1': {
				Questions();
				try {
					StartQuiz(isGuest);
				}
				catch (char* ex) {
					cout << "Error -> " << ex << endl;
				}
			}
					break;
			case '2': {
				
				try {
					LeaderBoard();
				}
				catch (char* ex) {
					cout << "Error -> " << ex << endl;
				}
			}
					break;
			default:
				break;
			}
		}
				break;
		case '3': {
			system("cls");
			cout << "\t\t\t\t\t\tEnter name: ";
			getline(cin, name);
			cout << "\t\t\t\t\t\tEnter surname: ";
			getline(cin, surname);
			isGuest = true;
			cout << "\n\t\t\t\t\t\tGuest login successfully!!!" << endl;
			Sleep(1500);
			system("cls");
			cout << "\t\t\t\t\t\t[1]Start quiz" << endl;
			cout << "\t\t\t\t\t\t[2]Scoreboard" << endl;
			option = _getch();
			switch (option) {
			case '1': {
				Questions();
				try {
					StartQuiz(isGuest);
				}
				catch (char* ex) {
					cout << "Error -> " << ex << endl;
				}
			}
					break;
			case '2': {
				try {
					LeaderBoard();
				}
				catch (char* ex) {
					cout << "Error -> " << ex << endl;
				}

			}
					break;
			}
			break;
		default:
			system("cls");
			break;

		}
		}
	}
}


