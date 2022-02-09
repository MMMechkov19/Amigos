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

