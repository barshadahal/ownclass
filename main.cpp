#include<iostream>
#include "Music.h"
using namespace std;

int main()
{
	Music music1;
	music1.setCategory(" Wertern");
	music1.setInstrument(" Guitar");
	music1.setType(" Jazz");
	music1.displayMessage();
}
