#pragma once
#include <iostream>

struct EVENT {
	int year;
	std::string name;
	std::string description;
};

struct EVENT_LIST {
	EVENT event;
	struct EVENT_LIST* next = NULL;
};

