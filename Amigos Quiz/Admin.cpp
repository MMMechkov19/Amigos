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

// Function for get second one
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

void initialiseEvents() {
	addEvent({ 811, "The battle of the Varbishki Pass", "The famous Battle of Pliska was fought in the pass on \nJuly 26, 811 between the armies of Bulgarian Empire \nled by Khan Krum and the Byzantine Empire under \nNicephorus I which ended with a decisive Bulgarian \nvictory and the death of the Byzantine Emperor." });
	addEvent({ 678, "The battle of the Varbishki Pass", "The famous Battle of Pliska was fought in the pass on \nJuly 26, 811 between the armies of Bulgarian Empire \nled by Khan Krum and the Byzantine Empire under \nNicephorus I which ended with a decisive Bulgarian \nvictory and the death of the Byzantine Emperor." });
	addEvent({ 456, "The battle of the Varbishki Pass", "The famous Battle of Pliska was fought in the pass on \nJuly 26, 811 between the armies of Bulgarian Empire \nled by Khan Krum and the Byzantine Empire under \nNicephorus I which ended with a decisive Bulgarian \nvictory and the death of the Byzantine Emperor." });
	addEvent({ 3456, "The battle of the Varbishki Pass", "The famous Battle of Pliska was fought in the pass on \nJuly 26, 811 between the armies of Bulgarian Empire \nled by Khan Krum and the Byzantine Empire under \nNicephorus I which ended with a decisive Bulgarian \nvictory and the death of the Byzantine Emperor." });
	addEvent({ 2342, "The battle of the Varbishki Pass", "The famous Battle of Pliska was fought in the pass on \nJuly 26, 811 between the armies of Bulgarian Empire \nled by Khan Krum and the Byzantine Empire under \nNicephorus I which ended with a decisive Bulgarian \nvictory and the death of the Byzantine Emperor." });
	addEvent({ 1231, "The battle of the Varbishki Pass", "The famous Battle of Pliska was fought in the pass on \nJuly 26, 811 between the armies of Bulgarian Empire \nled by Khan Krum and the Byzantine Empire under \nNicephorus I which ended with a decisive Bulgarian \nvictory and the death of the Byzantine Emperor." }); addEvent({ 1456, "The battle of the Varbishki Pass", "The famous Battle of Pliska was fought in the pass on \nJuly 26, 811 between the armies of Bulgarian Empire \nled by Khan Krum and the Byzantine Empire under \nNicephorus I which ended with a decisive Bulgarian \nvictory and the death of the Byzantine Emperor." });
}