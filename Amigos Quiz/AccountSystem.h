#pragma once
#include <iostream>

struct ACCOUNT {
		int id;
		std::string firstName;
		std::string lastName;
		std::string email;
		std::string password;
	};

	struct ACCOUNT_LIST {
		ACCOUNT account;
		struct ACCOUNT_LIST* next;
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

	//void DisplayQuestions(QUESTION_BANK*);

	//QUESTION_BANK* head = new QUESTION_BANK;
	//QUESTION_BANK* second = new QUESTION_BANK;
	//head->Question.id = 1;
	//head->Question.Question = "The term Tanzimat means:";
	//head->Question.Answers[0] = "1) corrupt officials who undermine the foundations of the state";
	//head->Question.Answers[1] = "2) the attacks by gangs of former spahi on the Bulgarian population";
	//head->Question.Answers[2] = "3) the reforms for the modernization of the Ottoman Empire";
	//head->Question.Answers[3] = "4) the ploughmen who refuse to participate in the army";
	//head->Question.RightAnswer = 2;
	//head->next = second;
	//second->Question.id = 2;
	//second->Question.Question = "Which statement is NOT related to the essence of Slavo - Bulgarian History?";
	//second->Question.Answers[0] = "1) Restores for the Bulgarians their lost connection with their own history.";
	//second->Question.Answers[1] = "2) The messages in it are a hidden call for the revival of the Bulgarian state.";
	//second->Question.Answers[2] = "3) History emphasizes the loyalty of Bulgarians to religion.";
	//second->Question.Answers[3] = "4) Paisius History is an autobiographical work.";
	//second->Question.RightAnswer = 3;
	//second->next = NULL;
