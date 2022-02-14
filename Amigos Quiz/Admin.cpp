#include <iostream>
#include "Admin.h"

// Function for adding events to the linked list
void addEvent(EVENT event)
{
	EVENT_LIST* temp = new EVENT_LIST();
	temp->event = event;
	temp->next = events;
	events = temp;
}

// Function for getting first Kingdom events
EVENT_LIST* getFirstKingdomEvents() {
	EVENT_LIST* temp1 = events;
	EVENT_LIST* firstKingdomList = new EVENT_LIST;
	while (temp1->next != NULL) {
		if (temp1->event.year <= 1018) {
			EVENT_LIST* temp2 = new EVENT_LIST();
			temp2->event = temp1->event;
			temp2->next = firstKingdomList;
			firstKingdomList = temp2;
		}
		temp1 = temp1->next;
	}
	return firstKingdomList;
}

// Function for getting second Kingdom events
EVENT_LIST* getSecondKingdomEvents() {
	EVENT_LIST* temp1 = events;
	EVENT_LIST* secondKingdomList = new EVENT_LIST;
	while (temp1->next != NULL) {
		if (temp1->event.year >= 1018) {
			EVENT_LIST* temp2 = new EVENT_LIST();
			temp2->event = temp1->event;
			temp2->next = secondKingdomList;
			secondKingdomList = temp2;
		}
		temp1 = temp1->next;
	}
	return secondKingdomList;
}

// Remove First Kingdom events
void removeFirstKingdomEvents()
{
	EVENT_LIST* temp = events;
	EVENT_LIST* prev = NULL;

	if (temp != NULL && temp->event.year <= 1018)
	{
		events = temp->next;
		delete temp;
		return;
	}
	else
	{
		while (temp != NULL && temp->event.year > 1018)
		{
			prev = temp;
			temp = temp->next;
		}
		if (temp == NULL)
		{
			return;
		}
		prev->next = temp->next;
		delete temp;
	}
	return;
}

// Remove Second Kingdom events
void removeSecondKingdomEvents()
{
	EVENT_LIST* temp = events;
	EVENT_LIST* prev = NULL;

	if (temp != NULL && temp->event.year > 1018)
	{
		events = temp->next;
		delete temp;
		return;
	}
	else
	{
		while (temp != NULL && temp->event.year <= 1018)
		{
			prev = temp;
			temp = temp->next;
		}
		if (temp == NULL)
		{
			return;
		}
		prev->next = temp->next;
		delete temp;
	}
	return;
}

// Function for initializing events
void initialiseEvents() {
	addEvent({ 811, "The battle of the Varbishki Pass", "The famous Battle of Pliska was fought in the pass on \nJuly 26, 811 between the armies of Bulgarian Empire \nled by Khan Krum and the Byzantine Empire under \nNicephorus I which ended with a decisive Bulgarian \nvictory and the death of the Byzantine Emperor." });
	addEvent({ 986, "The Battle of Trajan's Gate", "It is a historic mountain pass near Ihtiman, Bulgaria. \nThe pass was called Succi. Later it was named after \nRoman Emperor Trajan, on whose order a fortress \nby the name of Stipon was constructed on the hill over \nthe pass, between Thrace and Macedonia." });
	addEvent({ 1014, "The Battle of Kleidion", "The Battle of Kleidion of 29 July 1014, in which Tsar \nSamuil of Bulgaria's forces were routed by Byzantine \nEmperor Basil II's army. After the battle, Basil ordered \nall 14,000 Bulgarian captives blinded, with a single \nsoldier left one-eyed to guide every 100 blinded home." });
	addEvent({ 1185, "The Uprising of Asen and Peter", "The Uprisin-g of Asen and Peter was revolt of Bulgarians \nand Vlachs living in Moesia and the Balkan Mountains, \nthen the theme of Paristrion of the Byzantine Empire, \ncaused by a tax increase. After their return, many of the \nprotesters were unwilling to join the rebellion." });
	addEvent({ 1235, "The Battle of Klokotnitsa", "The Battle of Klokotnitsa between Second Bulgarian \nEmpire and Empire of Thessalonica. As result, Bulgaria \nemerged once again as the most powerful state in South\n-Eastern Europe. Nevertheless, Bulgarian power was \ncontested and surpassed by the rising Empire of Nicaea." });
	addEvent({ 1396, "The fall of the Vidin kingdom", "In 1396, Stratsimir contributed soldiers to assist the \nChristian nations' bid to overturn the Ottoman Empire. \nFollowing defeat at the hands of the Ottomans outside \nthe city of Nicopolis, Vidin finally fell under the sphere \nof the Ottomans led by Bayezid I." });
}