#pragma once
class Question {
	int number;
	string question;
	string answer_A;
	string answer_B;
	string answer_C;
	string answer_D;
public:
	Question() = default;
	Question(string question, string answer_A, string answer_B, string answer_C, string answer_D) {
		this->number = questionStaticId++;
		this->question = question;
		this->answer_A = answer_A;
		this->answer_B = answer_B;
		this->answer_C = answer_C;
		this->answer_D = answer_D;
	}
	int getNumber() { return number; }
	string getQuestion() { return question; }
	string getAnswer_A() { return answer_A; }
	string getAnswer_B() { return answer_B; }
	string getAnswer_C() { return answer_C; }
	string getAnswer_D() { return answer_D; }

};
