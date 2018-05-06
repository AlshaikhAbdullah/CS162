#include "5program.h"
using namespace std;
node :: node()
{


	park[0] = '\0';
	disc[0] = '\0';
	fence[0] = '\0';
	location[0] = '\0';
	size[0] = '\0';
	next = NULL;
	head = NULL;
	//	temp = new node;

}

node :: ~node()
{
	//delete temp;
	//delete head;
	//	delete next;


}

void node :: addPark ()// too add a dog park
{
	int parkNum=0;
	int i = 0;
	int count = 0;
	char repeat;
	//	node * temp;
	//temp = new node;
	//	temp = head;
	node * current= head;
	node * prev = NULL;


	//		cout << "How many parks would you like to add: ";
	//		cin >> parkNum;
	//		cin.ignore(100,'\n');

	//		for (i=0;i<parkNum;++i)
	//		{
	temp = new node;
	if(!head)
	{
		cout << "There are no Parks.\n"; 
	}
	cout << "What is the name of the park: ";
	cin.get(temp->park,SIZE,'\n');
	cin.ignore(100,'\n');
	//	organize();
	cout << "Where is it located: ";
	cin.get(temp->location,SIZE,'\n');
	cin.ignore(100,'\n');

	cout << "Is it fenced: ";
	cin.get(temp->fence,SIZE,'\n');
	cin.ignore(100,'\n');

	cout << "The park discription: ";
	cin.get(temp->disc,SIZE,'\n');
	cin.ignore(100,'\n');

	cout << "What is the size of the park: ";
	cin.get(temp->size,SIZE,'\n');
	cin.ignore(100,'\n');


	if(!head)
	{
		head = temp;
		head->next = NULL;

		//	++count;
		//	++i;
		//delete temp;
		return;	
	}

	//if(parkNum >1)
	//



	else if (head)
	{



		while (current!=NULL && strcmp(temp->park,current->park)>0) // to detect the case before adding the node
		{
			//if (strcmp(temp->park,current->park)<0)
			//	{
			//	temp->next=prev;
			//	prev=head;

			//	}				

			prev = current;
			current = current->next;	


		}
		if (!prev)//if its going to be add at the beginning
		{

			temp->next = head;
			head = temp;


		}


		/*if (!current->next)
		{

			current->next=temp;
			temp->next=NULL;

		}*/
		else // if its going to be added else where
		{
		/*	if (!current->next)
			{
				current->next = temp;
				temp->next=NULL;
				return;

			}
		*/
			temp->next=current;
			prev->next=temp;

		}


	}		//head = temp;
	//temp->next = current;
	//	head->next= temp;
	//	temp = temp->next;
	//head = temp;
	//	temp->next = head->next;
	//	head->next = temp;
	//temp->next = NULL;


	//			}
	//	}



cout << "Would you like to add another park(y/n): ";
cin >> repeat;
cin.ignore(100,'\n');

if (repeat == 'y')
{	
	addPark();
}





}

void node :: display ()
{
	node *current = head;
	//	current =head;

	cout << "Here are the dog parks:\n" << endl;
	while (current !=NULL)//to go through each node and display them
	{
		cout << "The dog park name is: " << current->park <<endl;
		cout << "It's located in: " << current->location << endl;
		cout << "And it's " << current->fence << " fenced" << endl;
		cout << "And it's " << current->disc << endl;
		cout << "And it's " << current->size << endl;

		current = current->next;
	}



}


void node :: search ()// infor maion about a dog park
{

	node * current = head;
	node * find = head;
	char temp[SIZE];

	while(current)// to display every dog park
	{
		cout << current->park << endl;
		current = current->next;
	}

	cout << "Which park would you like to choose: ";
	cin.get(temp,SIZE,'\n');
	cin.ignore(100,'\n');


	while(find)
	{
		if (strcmp(temp,find->park)== 0)// if theres a match 
		{

			cout << "the information about " << find->park << " are:\n" << endl;


			cout << find->location << ":" 
				<< find->disc << ":" << find->fence << ":"
				<< find->size << endl;
			return;
		}
		find = find->next; // to go to the next node
	}




}

void node :: organize ()// was trying to organize it alphabetically though this function
{
	node * current;
	current = head;
	node * prev;
	prev = current;

	while (current && strcmp(prev->park,current->park)<0)
	{

		prev = current;
		current = current->next;

	}





}
