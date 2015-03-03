/*
Author: Barsha Dahal
Roll no: 0309"A"
Creating own class: Music Class
*/

#include<iostream>
#include "Music.h"
using namespace std;

int main()
{
    string cate;
    string instru;
    string type;

    Music musictyp1;
    Music *ptr_musictyp2;
	Music musictyp2;
	ptr_musictyp2=&musictyp2;

    cout << "Enter the category of music: ";
    cin >> cate;
    musictyp1.setCategory(cate);

    cout << endl << "Enter musical instrument: ";
    cin >> instru;
    musictyp1.setInstrument(instru);

    cout << endl << "Enter type of music: ";
    cin >> type;
    musictyp1.setType(type);

    musictyp1.displayMsg();

   ptr_musictyp2->setCategory("Eastern");
	ptr_musictyp2->setInstrument("Tanpura");
	ptr_musictyp2->setType("Traditional");

    musictyp2.displayMsg();
}

