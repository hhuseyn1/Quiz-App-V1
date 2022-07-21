#pragma once
class Guest {
	string _name ;
	string _surname;
public:
	Guest() = default;
	Guest(string name,string surname){
		this->_name=name;
		this->_surname=surname;
	}
	string getName() { return _name; }
	string getSurname() { return _surname; }


};