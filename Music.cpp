/*
Author: Barsha Dahal
Roll no: 0309"A"
Creating own class: Music Class
*/

#include<iostream>
#include <string>
#include "Music.h"
using namespace std;

Music::Music (string cate, string instru, string type)
{
    setCategory(cate);
    setInstrument(instru);
    setType(type);
}

Music::~Music()
{
    cout << endl << "Object " << cate << " Destroyed."<<endl;
}

void Music::setCategory(string m_cate)
{
    cate = m_cate;
}
void Music::setInstrument(string m_instru)
{
    instru = m_instru;
}
void Music::setType(string m_type)
{
    type= m_type;
}

string Music::getCategory()
{
    return cate;
}
string Music::getInstrument()
{
    return instru;
}
string Music::getType()
{
    return type;
}

void Music::displayMsg()
{
    cout << endl <<"I love" <<getCategory()<< " music and " << getInstrument() << " is my favourite instrument and I love " << getType() <<" type." << endl;
}



