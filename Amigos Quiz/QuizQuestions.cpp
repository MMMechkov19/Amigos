#include <iostream>
#include "QuizQuestion.h"

// Function for adding events to the linked list
void addQuestion(QUESTION event)
{
	QUESTION_LIST* temp = new QUESTION_LIST();
	temp->question = event;
	temp->next = questions;
	questions = temp;
}

// Function for getting first Kingdom events
QUESTION_LIST* getFirstKingdomQuestions() {
	QUESTION_LIST* temp1 = questions;
	QUESTION_LIST* firstKingdomList = new QUESTION_LIST;
	while (temp1->next != NULL) {
		if (temp1->question.period == 1) {
			QUESTION_LIST* temp2 = new QUESTION_LIST();
			temp2->question = temp1->question;
			temp2->next = firstKingdomList;
			firstKingdomList = temp2;
		}
		temp1 = temp1->next;
	}
	return firstKingdomList;
}

// Function for getting second Kingdom events
QUESTION_LIST* getSecondKingdomQuestions() {
	QUESTION_LIST* temp1 = questions;
	QUESTION_LIST* secondKingdomList = new QUESTION_LIST;
	while (temp1->next != NULL) {
		if (temp1->question.period == 2) {
			QUESTION_LIST* temp2 = new QUESTION_LIST();
			temp2->question = temp1->question;
			temp2->next = secondKingdomList;
			secondKingdomList = temp2;
		}
		temp1 = temp1->next;
	}
	return secondKingdomList;
}

int getLinkedListSize(QUESTION_LIST* head)
{
	QUESTION_LIST* temp = head;
	int counter = 0;
	while (temp != NULL)
	{
		counter++;
		temp = temp->next;
	}
	return counter;
}

// Function for initializing events
void initialiseQuestions() {
	addQuestion({ 1,"Who lead the The battle of the Varbishki Pass?", {"Khan Asparuh","Tsar Samuil","Tsar Simeon","Khan Krum"}, 0, 1 });
	addQuestion({ 2," Where is the Trajan's Gate?", {"Near Ihtiman","Near Thrace","Near Macedonia","Near Pliska"}, 0, 1 });
	addQuestion({ 3,"In which year did Krum defeat Byzantium at the Varbish Pass?", {"831","814","811","809"}, 0, 1 });
	addQuestion({ 4,"When is the The Battle of Kleidion?", {"29 July 1014","14 June 976","26 July 811","30 December 997"}, 0, 1 });
	addQuestion({ 5,"How many soldiers are left with one eye to lead the 14,000 army?", {"Every 140 soldiers","Every 100 soldiers","Every 500 soldiers","Every 1000 soldiers"}, 0, 1 });
	addQuestion({ 6,"Who blinds all 14,000 soldiers, leaving 1 in every 100 soldiers?", {"Basil II","Vladimir II","Konstantin VII","Nikifor II"}, 0, 1 });	
}