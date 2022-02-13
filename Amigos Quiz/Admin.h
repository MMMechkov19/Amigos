#pragma once
#include <iostream>

struct EVENT {
	int id;
	int year = 0;
	std::string name = "";
	std::string description = "";
};

struct EVENT_LIST {
	EVENT event;
	struct EVENT_LIST* next = NULL;
};

__declspec(selectany) EVENT_LIST* events = new EVENT_LIST;
void addEvent(EVENT);
EVENT_LIST* getFirstKingdomEvents();
EVENT_LIST* getSecondKingdomEvents();
void initialiseEvents();