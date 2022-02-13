#pragma once
#include <iostream>

//Structure for Accounts
struct ACCOUNT {
		int id;
		std::string firstName;
		std::string lastName;
		std::string email;
		std::string password;
	};

//Structure for Account List
struct ACCOUNT_LIST {
		ACCOUNT account;
		struct ACCOUNT_LIST* next = NULL;
	};

	__declspec(selectany) ACCOUNT_LIST* accounts = new ACCOUNT_LIST;
	__declspec(selectany) ACCOUNT currentAccount;
	void addAccount(ACCOUNT);
	bool isPassValid(std::string password);
	bool isNameValid(std::string name);
	bool isMailValid(std::string email);
	int countSymbols(char symbol, std::string word);
	bool isEmailStartsWith(std::string email);
	int counterUpperCase(std::string password);
	bool isNameContainsNumbers(std::string name);
	ACCOUNT searchAccount(std::string email, std::string password);
	void initialiseAccounts();
	__declspec(selectany) int lastid = 10;
	//void DisplayQuestions(QUESTION_BANK*);