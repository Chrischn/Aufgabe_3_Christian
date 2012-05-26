#include <iostream>
#include <string>
using namespace std;
#include "header.h"
#include "container.h"														



int main()
{
	char modus = NULL;
	Medium* ptrm = NULL;
	Container* ptrc = new Container();
	int sigi;
	
	while(modus != 'q')
	{
		cout << "Waehlen sie den gewuenschten Modus:" << endl << endl;
		cout << "Moegliche Modi:" << endl;
		cout << "m : neues Medium anlegen" << endl;
		cout << "l : Mediumausgeben" << endl;
		cout << "e : Medium entleihen" << endl;
		cout << "r : Medium zurueckgeben" << endl;
		cout << "q : beenden" << endl << endl;
		cout << "Modus: "; 
		cin >> modus;													
		cout << endl;

		switch(modus)
		{
			case 'm':
			ptrm = new Medium();
			ptrc->add(ptrm);
			break;

			case 'l':
			/*cout << endl << "Medienbestand:" << endl;
			ptrc->tmp_element = ptrc->aktuelles_element;
			if(ptrc->tmp_element->next == NULL)
			{
				ptrc->tmp_element->obj_adr->print();
				break;
			}
			while(ptrc->tmp_element->next != NULL)
			{	
				
				ptrc->tmp_element->obj_adr->print();
				ptrc->tmp_element = ptrc->tmp_element->next;
				
			}
			ptrc->tmp_element = NULL;*/
			break;

			case 'e':
		/*	if(ptrc->erstes_element == 0)
			{
				cout << endl << "Kein Element in der Liste vorhanden" << endl;
			}
			else
			{
				cout << endl << "Zu entleihende Signatur eingeben: ";
				cin >> sigi;
				while(cin.fail())
					{
						cin.clear();
						cin.sync();
						cout << endl << "Nur Zahlen eingeben!" << endl;
						cout << endl << "Signatur eingeben: ";
						cin >> sigi;				
					}
					cout << endl;
					ptrc->tmp_element = ptrc->erstes_element;
					while(ptrc->tmp_element->next != NULL)
					{
						if(ptrc->tmp_element->obj_adr->sigi(sigi))
						{
							ptrc->tmp_element->obj_adr->entleihen();
							break;
						}
						else
						{	
							if(ptrc->tmp_element->next == NULL || ptrc->tmp_element->obj_adr->sigi(sigi) == false)
							{
								cout << endl << "Kein Medium mit angegbenener Signatur gefunden!" << endl;
							}
							else
							{
							ptrc->tmp_element->next;
							}
						}
					}
			}*/

			break;

			case 'r':
			break;

			case 'q':
			break;

			default:
			break;

		}

		modus = NULL; cin.sync();
		cout << endl;

	}

	return 0;
}