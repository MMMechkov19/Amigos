#pragma once
#include <iostream>

// Struct for event
struct QUESTION {
	int id;
	std::string question;
	std::string answers[4];
	int correctAnswerIndex;
	int period;
};

// Struct for event list
struct QUESTION_LIST {
	QUESTION question;
	struct QUESTION_LIST* next = NULL;
};


__declspec(selectany) QUESTION_LIST* questions = new QUESTION_LIST;
void addQuestion(QUESTION);
QUESTION_LIST* getFirstKingdomQuestions();
QUESTION_LIST* getSecondKingdomQuestions();
//void removeFirstKingdomEvents();
//void removeSecondKingdomEvents();
void initialiseQuestions();
int getLinkedListSize(QUESTION_LIST* head);