#include <iostream>
#include "Admin.h"

void addEvent(EVENT event)
{
	EVENT_LIST* temp = new EVENT_LIST();
	temp->event = event;
	temp->next = events;
	events = temp;
}

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
	}
	return firstKingdomList;
}

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
	}
	return secondKingdomList;
}

void initialiseEvents() {
	addEvent({ 811, "The battle of the Varbishki Pass", "The famous Battle of Pliska was fought in the pass on \nJuly 26, 811 between the armies of Bulgarian Empire \nled by Khan Krum and the Byzantine Empire under \nNicephorus I which ended with a decisive Bulgarian \nvictory and the death of the Byzantine Emperor." });
	addEvent({ 1456, "The battle of the Varbishki Pass", "The famous Battle of Pliska was fought in the pass on \nJuly 26, 811 between the armies of Bulgarian Empire \nled by Khan Krum and the Byzantine Empire under \nNicephorus I which ended with a decisive Bulgarian \nvictory and the death of the Byzantine Emperor." });
}