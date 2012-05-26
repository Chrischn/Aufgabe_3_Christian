#include <string>
using namespace std;
#include "container.h"
#include <iostream>


Container::Container()
{
	erstes_element = NULL;
	aktuelles_element = NULL;
	letztes_element = NULL;
	tmp_element = NULL;
}

bool Container::add(Medium* T)
{	
		if(erstes_element == NULL)
		{
			aktuelles_element = new Knoten;
			aktuelles_element->obj_adr = T;
			aktuelles_element->next = NULL;
			erstes_element = aktuelles_element;
			return 1;
		}
		else
		{
			aktuelles_element = erstes_element;
		
			while(aktuelles_element->next != NULL)
			{
				aktuelles_element = aktuelles_element->next;
			}

			Knoten* neues_element = new Knoten;
			neues_element->obj_adr = T;
			neues_element->next = NULL;
			aktuelles_element->next = neues_element;
			return 1;
		}
		
		return 0;
}

bool Container::remove()
{

	return 1;
}

void Container::begin()
{

}

void Container::next()
{

}

//Knoten* Container::getitem()
//{
//	return aktuelles_element;
//}
