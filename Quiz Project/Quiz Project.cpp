#include <iostream>
#include <vector>
#include <conio.h>
#include "json.hpp"
#include <fstream>
#include <string>
#include <Windows.h>
using namespace std;
using json = nlohmann::json;
int questionStaticId = 0;
#include"Quiz.h"
#include"Admin.h"
#include"User.h"
#include"Guest.h"
#include "functions.h"
string username, password,phone,email;
int main() {
	vector<User>users;
	vector<Question>questions;
	string fileName = "questions.txt";
	string fileNameLeader = "scoreboard.txt";
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
			if (username == "admin" && password == "admin") {
				cout << "\n\t\t\t\t\t\tAdmin login successfully!!!" << endl;
				Sleep(1500);
				system("cls");

				cout << "\t\t\t\t\t\t[1]Add question" << endl;
				cout << "\t\t\t\t\t\t[2]Delete question" << endl;
				cout << "\t\t\t\t\t\t[3]Play game" << endl;
				cout << "\t\t\t\t\t\t[4]Scoreboard" << endl;
				cout << "\t\t\t\t\t\t[5]Show all questions and answers" << endl;

				option = _getch();
				switch (option) {
				case '1':{
					AddQuestion(questions);
				}
				break;
				case '2': {
					DeleteQuestion(questions);
				}
				break;
				case '3': {
					StartQuiz(username);
				}
				break;
				case '4': {
					LeaderBoard(fileNameLeader);
				}
				break;
				case '5': {
					system("cls");
					Questions();
					AdminAllAnswers();	
					
				}
					break;
				default:
					system("cls");
					break;
				}



			}
			else
				system("cls");
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
		case '1':{
			StartQuiz(username);
		}
				break;
		case '2': {
			LeaderBoard(fileNameLeader);
		}
				break;
			default:
				break;
		}
		}
				break;
		case '3': {
			system("cls");
			username = "Guest";
			cout << "\n\t\t\t\t\t\tGuest login successfully!!!" << endl;
			Sleep(1500);
			system("cls");
		}
				break;
		default:
			system("cls");
			break;

    }
	}
	}


