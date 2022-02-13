#include <iostream>
#include "AccountSystem.h"
using namespace std;

// Function for adding account to the linked list
void addAccount(ACCOUNT account)
{
	
	ACCOUNT_LIST* tmp = new ACCOUNT_LIST();
	tmp->account = account;
	tmp->next = accounts;
	accounts = tmp;
}

// Function for checking validity of name
bool isNameValid(std::string name) {
	if (name.size() < 2 || isNameContainsNumbers(name)) {

		return false;
	}
	return true;
}

// Function for passing the validity
bool isPassValid(std::string password) {
	if (password.size() > 6 && counterUpperCase(password) >= 1) {
		return true;
	}
	return false;
}

// Function for mail validity
bool isMailValid(std::string email) {
	if (countSymbols('@', email) == 1 && countSymbols('\.', email) == 1 && isEmailStartsWith(email) == 1) {
		return true;
	}
	return false;
}

// Function for counting symbols
int countSymbols(char symbol, std::string word) {
	int counter = 0;
	for (size_t i = 0; i < word.size(); i++) {
		if (word[i] == symbol) {
			counter++;
		}
	}
	return counter;
}

// Function for starting email typing
bool isEmailStartsWith(std::string email) {
	int counter = 0;
	for (char i = 'a', y = 'A'; i < 'z' && y < 'Z'; i++, y++) {

		if (email[0] == i || email[0] == y) {
			counter++;
		}
	}
	return counter;
}

// Function for counting upper symbols
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

// Function for checking for containing numbers
bool isNameContainsNumbers(std::string name) {
	int counter = 0;
	for (char i = '0'; i <= '9'; i++) {
		for (size_t y = 0; y < name.size(); y++) {
			if (name[y] == i) {
				counter++;
			}
		}
	}
	return counter;
}

// Function for searching account
ACCOUNT searchAccount(std::string email, std::string password){
	ACCOUNT_LIST* temp = accounts;
	while (temp != NULL) {
		if (temp->account.email == email && temp->account.password == password) return temp->account;
		temp = temp->next;
	}
	ACCOUNT NotFound = { 0, "Not", "Found", "For", "Real" };
	return NotFound;
}

// Function for initializing accounts
void initialiseAccounts() {
	addAccount({ 1, "Martin", "Martinov", "mvmartinov19@codingburgas.bg", "Panda1234" });
	addAccount({ 2, "Petur", "Petrov", "ppetrov19@codingburgas.bg", "Panda1234" });
	addAccount({ 3, "Ilko", "Iliev", "idiliev18@codingburgas.bg", "Panda1234" });
	addAccount({ 4, "Martin", "Mechkov", "mmmechkov19@codingburgas.bg", "Panda1234" });
	addAccount({ 5, "Cveti", "Yaneva", "ccyaneva@codingburgas.bg", "Panda1234" });
	addAccount({ 6, "Galena", "Haka", "gghaka@codingburgas.bg", "Panda1234" });
	addAccount({ 7, "Azis", "Georgiev", "azisgeorgiev@codingburgas.bg", "Panda1234" });
	addAccount({ 8, "Mitko", "Paynera", "mitkopaynera@codingburgas.bg", "Panda1234" });
	addAccount({ 9, "Tommy", "Innit", "tommyinnit@codingburgas.bg", "Panda1234" });
	addAccount({ 10, "Georgi", "Germanov", "ggermanov@codingburgas.bg", "Panda1234" });
}