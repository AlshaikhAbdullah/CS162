// Abdullah Alshaikh - CS162
// Program #4 
/*
	the program is to let the user add dog parks and display
	information about each one or all of them.
*/




#include <fstream>
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;


const int SIZE = 50;

const int CLASS = 20;

struct parks1
{

	char * readall;
	int count;

		char * parkName;
		char * location;
		char * fence;
		char * parkSize;
		char * disc;
//		parks1 * ptr;
		//int newPark;
//		int i;
//		int num;
		//int t;
		//int count1;

};

class parks
{
	public:
		parks();
		~parks();
		bool menu();
		bool addPark ();
		bool information();
		void display();
		void write();
	private:
		parks1 * ptr;
		int num;
		int newPark;
		parks1 * ptr1;
};

