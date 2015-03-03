/*
Author: Barsha Dahal
Roll no: 0309"A"
Creating own class: Music Class
*/

#include <string>
using namespace std;


class Music
{
 public:
         Music( string cate="", string instru="", string type="");
        ~Music();
        void setCategory(string m_cate);
        void setInstrument(string m_instru);
        void setType(string m_type);
        string getCategory();
        string getInstrument();
        string getType();
        void displayMsg();

 private:

		string cate;
		string instru;
		string type;

 };

// MUSIC_H


