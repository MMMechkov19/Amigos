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
	addQuestion({ 1,"Who lead the The battle of \n      the Varbishki Pass?", {"Khan Asparuh","Tsar Samuil","Tsar Simeon","Khan Krum"}, 3, 1 });
	addQuestion({ 2,"Where is the Trajan's Gate?", {"Near Ihtiman","Near Thrace","Near Macedonia","Near Pliska"}, 0, 1 });
	addQuestion({ 3,"In which year did Krum defeat \nByzantium at the Varbish Pass?", {"831","814","811","809"}, 2, 1 });
	addQuestion({ 4,"When is the The Battle of Kleidion?", {"29 July 1014","14 June 976","26 July 811","30 December 997"}, 0, 1 });
	addQuestion({ 5,"How many soldiers are left with \none eye to lead the 14,000 army?", {"Every 140 soldiers","Every 100 soldiers","Every 500 soldiers","Every 1000 soldiers"}, 1, 1 });
	addQuestion({ 6,"Who blinds all 14,000 soldiers, \nleaving 1 in every 100 soldiers?", {"Basil II","Vladimir II","Konstantin VII","Nikifor II"}, 0, 1 });
	addQuestion({ 7,"In what year did the Asenevtsi \nuprising break out?", {"1018","1185","1207","1396"}, 1, 1 });
	addQuestion({ 8,"Which Bulgarian ruler and when did \nhe fight the battle of Klokotnitsa?", {"Kaloyan - 1230","Ivan Asen I - 1235","Ivan Asen II - 1230","Kaloyan - 1235"}, 2, 1 });
	addQuestion({ 9,"When was Vidin conquered?", {"1393","1369","1392","1396"}, 3, 1 });
	addQuestion({ 10,"The Uprising led by?", {"Kaloyan and Peter","Ivailo and Asen","Konstantin VII","Asen and Peter"}, 3, 1 });
}