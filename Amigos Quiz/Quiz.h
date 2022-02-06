#pragma once
#include <iostream>
struct QUESTION {
	int id;
	std::string Question;
	std::string Answers[4];
	int RightAnswer;
};

struct QUESTION_BANK {
	QUESTION Question;
	struct QUESTION_BANK* next;
};

void AddQuestions(QUESTION_BANK*);
void DisplayQuestions(QUESTION_BANK*);

