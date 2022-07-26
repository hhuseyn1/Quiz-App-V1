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
	int getNumber()const { return number; }
	string getQuestion()const { return question; }
	string getAnswer_A()const { return answer_A; }
	string getAnswer_B()const { return answer_B; }
	string getAnswer_C()const { return answer_C; }
	string getAnswer_D()const { return answer_D; }


friend ostream& operator<<(ostream output, const Question& question);
};
ostream& operator<<(ostream output, const Question& question) {
	cout << question.number << '.' << question.question << endl;
	cout <<"A:"<<question.answer_A<<endl;
	cout <<"B:"<<question.answer_B<<endl;
	cout <<"C:"<<question.answer_C<<endl;
	cout <<"D:"<<question.answer_D<<endl;
	return output;
}
