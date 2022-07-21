#pragma once
class User {
	string fullName;
	string password;
	string phone;
	string email;
public:
	User() = default;
	User(string fullName,string password,string phone,string email){
	this->fullName=fullName;
	this->password = password;
	this->phone = phone;
	this->email = email;
	}
	string getfullName(){return fullName;}
	string getPassword(){return password;}
	string getPhone(){return phone;}
	string getEmail(){return email;}

};