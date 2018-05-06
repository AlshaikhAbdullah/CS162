#include "4program.h"
parks::parks()
{

	//parkName = '\0';i
	//location = '\0';
//	fence  = '\0';
//	parkSize = '\0';
//	disc = '\0';
	newPark = 0;
	num = 50;
	ptr = new parks1 [num];// i was told by tutors i dont need to fix the size of the array 
}

parks :: ~parks()
{
	//	if (parkName
	//	delete[] parkName;
	//	if (location)
	//	delete[] location;
	//	if (fence)
	//	delete[] fence;
	//	if (parkSize)
	//	delete[] parkSize;
	//	if (disc)
	//	delete[] disc;
	delete [] ptr;

}



bool parks :: menu()
{
	int response = 0;
//	parks dogParks;	
	char repeat;

		     do{
			cout << "Here's the MENU:\n"
			<< "1- To add a dog park.\n"
			<< "2- To show information about a dog park.\n"
			<< "3- To display all dog parks.\n"
			<< "4- To quit(or any letter).\n" 
			<< "What would you choose(1-4): ";
			cin >> response;
			cin.ignore(100,'\n');
//				if (isalpha(response))
//				{
//					return false;
//				}
				if (response == 4)
				{
					return false;
				}
				if (response == 1)
				{
					 addPark();
				//	return true;
			   	}
				if (response == 2)
				{
					information();
				}
				if (response == 3)
				{

					display();
				}
			cout << "Would you like to see the Menu(y/n -To quit): ";
			cin >> repeat;
			cin.ignore(100,'\n');
				if(repeat == 'n' || repeat == 'n')					return false;
			}while(response >= 1 && response < 4);
}

void parks :: write() // to copy data to new one but wont need it
{
	int i;
	int g;

		for (g =0; g < i; ++g)
		{

		strcpy (ptr1[g].parkName,ptr[g].parkName);
		strcpy (ptr1[g].location,ptr[g].location);
		strcpy (ptr1[g].fence,ptr[g].fence);
		strcpy (ptr1[g].parkSize,ptr[g].parkSize);
		strcpy (ptr1[g].disc,ptr[g].disc);

		}
		





}

bool parks :: addPark()
{
	
	



	char temp[SIZE];
	int keep = 0;
	int i = newPark;		
	char response; 
	    //do {

		cout << "How many parks would you like to add: ";
		cin >> keep;
		cin.ignore(100,'\n');
		//count = newPark;
		//ptr = new parks[newPark];
		//keep = newPark;
		
			if (keep <= 0)// to keep adding if the user wants to
			{
		//		 newPark+=num;
		//		ptr1 = new parks [num];
		//		write(i);
		//		i = newPark;

				cout << "Invalid number of parks" << endl;
				return false;
			}
			else if (keep + i >= num)
			{
		//		ptr = new parks [newPark];
	 		
		//		num = newPark;
				cout << "Can't add that many parks" << endl;
				return false;
			}
		//ptr = new parks1 [num];
	 do{

		cout << "What is the name of the dog park: ";
		cin.get(temp,SIZE,'\n');
		cin.ignore(100,'\n');
		ptr[i].parkName = new char[strlen(temp)+1];
		strcpy(ptr[i].parkName,temp);
		//cout << ptr[i].parkName << endl;

		cout << "Where is the location of the park: ";
		cin.get(temp,SIZE,'\n');
		cin.ignore(100,'\n');
		ptr[i].location = new char[strlen(temp)+1];
		strcpy(ptr[i].location,temp);

		cout << "What is the park's description: ";
		cin.get(temp,SIZE,'\n');
		cin.ignore(100,'\n');
		ptr[i].disc = new char[strlen(temp)+1];
		strcpy(ptr[i].disc,temp);

		cout << "Is it fenced: ";
		cin.get(temp,SIZE,'\n');
		cin.ignore(100,'\n');
		ptr[i].fence = new char[strlen(temp)+1];
		strcpy(ptr[i].fence,temp);

		cout << "What is the size of the park: ";
		cin.get(temp,SIZE,'\n');
		cin.ignore(100,'\n');
		ptr[i].parkSize = new char [strlen(temp)+1];
		strcpy(ptr[i].parkSize,temp);

		++newPark;
		++i; // cout << i << endl;// to incrument 
		//cout << "Would you like to add another park(y/n): ";
		//cin >> response;
	//	write(i);
	//	cin.ignore(100,'\n');
		if (keep > 1)
		{
			cout << "\nEnter the information for the"
			<<" next park.\n" << endl;
		}
		}while (i < keep);

//		delete [] ptr;
		

}

bool parks :: information()
{

	char temp [SIZE];
	int count1;
	int t;
	char * word;
//		if (ptr[] == NULL)
//		{
//			cout << "the list is empaty" << endl;
//			return false;
//		}
		cout << "Here is the list of Dog Parks:" << endl;
		for (count1 =0; count1 < newPark; ++count1)
		{
		cout << ptr[count1].parkName << endl;
		}// to display the parks
		cout << "\nWhich Dog Park would you like" <<
		" to choose: ";
		cin.get(temp,SIZE,'\n');
		cin.ignore(100,'\n');
		word = new char[strlen(temp)+1];
		strcpy (word,temp);
			for (t =0; t < newPark; ++t)// to go though my array
			{

				if (strcmp(word,ptr[t].parkName) == 0)// if it matches 
				{
			
				cout << "The park name is " <<
				ptr[t].parkName << " and it's located in " 
				<< ptr[t].location << " ,it's "
				<< ptr[t].fence << " fenced " 
				<< " ,it's a " << ptr[t].parkSize
				<< " park" << " and it's a "
				<< ptr[t].disc << " park." << endl;
				
				delete [] word;
				return false; 
			
				}
//				else
//				{

	
//					cout << "There's no matching" << endl;
//				return false;
				

			
			}

 		cout << "The list is empty. You Didn't add any PARKS!!." << endl;		

}

void parks :: display()
{

 	int adding = 0;
	int park = 0;
	//parks * ptr1; // pointer to my class
		cout << "Here this list of parks: " << endl;
		for(adding =0; adding < newPark; ++adding)
		{

			park+=1;
			cout << "\nPark number "<< park << " is: "
			<< ptr[adding].parkName << "\nit's located in " << ptr[adding].location << endl;

		//adding+=1;



		}


}
