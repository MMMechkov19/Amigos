#include <iostream>
#include "AccountSystem.h"
using namespace std;

void addAccount(ACCOUNT account)
{
	
	ACCOUNT_LIST* tmp = new ACCOUNT_LIST();
	tmp->account = account;
	tmp->next = accounts;
	accounts = tmp;
}

bool isNameValid(std::string name) {
	if (name.size() < 2 || name.find_first_of("0123456789") != string::npos) {
		return true;
	}
	return false;
}

bool isPassValid(std::string password) {
	if (password.size() > 6 && counterUpperCase(password) >= 1) {
		return true;
	}
	return false;
}

bool isMailValid(std::string email) {
	if (countSymbols('@', email) == 1 && countSymbols('\.', email) == 1 && isEmailStartsWith(email) == 1) {
		return true;
	}
	return false;
}

int countSymbols(char symbol, std::string word) {
	int counter = 0;
	for (size_t i = 0; i < word.size(); i++) {
		if (word[i] == symbol) {
			counter++;
		}
	}
	return counter;
}

bool isEmailStartsWith(std::string email) {
	int counter = 0;
	for (char i = 'a', y = 'A'; i < 'z' && y < 'Z'; i++, y++) {

		if (email[0] == i || email[0] == y) {
			counter++;
		}
	}
	return counter;
}

int counterUpperCase(std::string password) {
	int counter = 0;
	for (char i = 'A'; i <= 'Z'; i++) {
		for (size_t y = 0; y < password.size(); y++) {
			if (password[y] == i) {
				counter++;
			}
		}
	}
	return counter;
}
