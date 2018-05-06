#include "5program.h"
using namespace std;
int main ()
{

	node dogParks;
	int response;
	char repeat;

	do{
		cout << "Welcome !!\n\n";
		cout << "Here is the MENU: " << endl;

		cout << "1- To add a Dog Park.\n"
		<< "2- To get information about a Dog Park.\n"
		<< "3- To display all Dog Parks.\n"
		<< "4- To quit.\n"
		<< "What would you choose(1-4): ";
		cin >> response;
		cin.ignore(100,'\n');

			if(response == 1)
			{
				dogParks.addPark();
			}
			if(response == 2)
			{
				dogParks.search();
			}
			if(response == 3)
			{
				dogParks.display();
			}
			if(response == 4)
			{
				return 0;
			}

		cout << "Would you like to see the MENU again(y- for MENU/ Any Key To Quit): ";
		cin >> repeat;
		cin.ignore(100,'\n');
	
	}while(repeat == 'y');


		return 0;

}
