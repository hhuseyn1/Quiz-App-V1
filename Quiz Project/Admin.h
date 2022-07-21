#pragma once
class Admin {
	string fullName;
	string password;
	string email;
public:
	Admin() = default;
	Admin(string fullName, string password, string email) {
		this->fullName = fullName;
		this->password = password;
		this->email = email;
	}

	string getfullName() { return fullName; }
	string getPassword() { return password; }
	string getEmail() { return email; }
};