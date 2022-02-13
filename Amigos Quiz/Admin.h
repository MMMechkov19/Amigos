#pragma once
#include <iostream>

// Struct for event
struct EVENT {
	int year = 0;
	std::string name = "";
	std::string description = "";
};

// Struct for event list
struct EVENT_LIST {
	EVENT event;
	struct EVENT_LIST* next = NULL;
};


__declspec(selectany) EVENT_LIST* events = new EVENT_LIST;
void addEvent(EVENT);
EVENT_LIST* getFirstKingdomEvents();
EVENT_LIST* getSecondKingdomEvents();
void initialiseEvents();