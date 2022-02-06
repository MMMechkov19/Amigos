#include <iostream>
#include "AccountSystem.h"
using namespace std;

void AddAccount(AccountSystem::ACCOUNT account)
{
	AccountSystem::ACCOUNT_LIST* tmp = new AccountSystem::ACCOUNT_LIST();
	tmp->account = account;
	tmp->next = AccountSystem::accounts;
	AccountSystem::accounts = tmp;
}