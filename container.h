#ifndef CONTAINER_H
#define CONTAINER_H
#include "header.h"
#include <string>
using namespace std;

class Container														
{
	public:
	
	struct Knoten
	{
		Medium* obj_adr;
		Knoten* next;

	};

	Knoten* erstes_element;
	Knoten* aktuelles_element;
	Knoten* letztes_element;
	Knoten* tmp_element;
	Container();
	bool add(Medium*);
	bool remove();
	void begin();
	void next();
	Knoten* getitem();

};
#endif