#include<iostream>
#include <string> 

using namespace std;

// Music class definition
class Music
{
public:
	Music (string cate="", string instru="", string type="");
	void setCategory (string);
	void setInstrument (string);
	void setType(string);
	string getCategory ();
	string getInstrument ();
	string getType (); 
	void displayMessage ();
private:
	string Category;
	string Instrument;
	string Type;  
};





