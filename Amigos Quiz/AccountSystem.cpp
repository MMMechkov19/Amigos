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
		return false;
	}
	return true;
}

bool isPassValid(std::string password) {

}

/*bool isMailValid(std::string email) {
	if (email.find("@") != string::npos && ) {
		return true;
	}
	return false;
}
*/

int countSymbols(char symbol, std::string word) {
	int counter = 0;
	for (size_t i = 0; i < word.size(); i++) {
		if (word[i] == symbol) {
			counter++;
		}
	}
	return counter;
}