//Abdullah Alshaikh - Program 5
// CS 162 

/*

	Program to help the user add dog parks and display information about them

*/
#include <iostream>
#include <cctype>
#include <cstring>
#include <fstream>
using namespace std;
const int SIZE = 50;


class node
{
	public:
	node();
	~node(); 
	void addPark ();
	void display ();
	void search ();
	void organize();
	private:
	char park [SIZE];
	char disc [SIZE];
	char fence [SIZE];
	char location [SIZE];
	char size [SIZE];
	node * next;
	node * head;
	node * temp;	
};
