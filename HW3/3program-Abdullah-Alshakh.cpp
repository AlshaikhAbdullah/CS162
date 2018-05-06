//Abdullah Alshaikh - CS 162
// Program 3
/*

	program that will help me over the summer to keep 
	practcing coding with C++ by adding removing modifing questions
*/

#include <iostream>
#include <cctype>
#include <cstring>
#include <fstream>
using namespace std;

const int SIZE = 21;
const int TEXT = 120;
const char file[] = "practice.txt";
const int STRUCT = 20;

struct summer // just to add information
{
		char qText [TEXT];
		int qHard;
		char qType [SIZE];
		char qNotation;
		//int i;
}; 
struct reading // this struct for modification 
{
	char text [TEXT];
	//int hard;
	//char type [SIZE];
	char notation;
	char ch;
};	


bool menu (reading ques[],summer question [], int & i, int & numq);
bool aStep (summer question[], int & i); 
bool bStep (summer question[], int & i);
bool cStep (summer question[], int & i);
bool dStep ( int & i,reading ques[],int & numq);
bool qWrite (summer question[], int & i);
void load();
bool modify (reading ques[], int & i, int & numq);
bool textRead (reading ques[], int & i, int & numq);
bool reWrite (reading ques[], int & i);
int main()
{
		char letter;
		summer question [STRUCT];
		reading ques [STRUCT];
		int i;
		int numq;
		char ch;
			cout << "\nWelcome !!!\n"
			     << "This program will help you add/remove practice questions\nFor your summer vaction\n"
			     << "Enter any letter to continue: ";
			cin >> letter;
			cin.ignore(100,'\n'); 

			menu(ques,question,i,numq);
		//aStep(question, i);
		//textRead(ques,i);
		//cout << ques[0].ch << endl;
		//textRead(ques,i);




			return 0;
}


bool menu (reading ques[],summer question[], int & i, int & numq)
{
	char response;
	char repeat;
		do{
			cout << "\nHere is the MENU:"
			     << "\na- To add a question and save it."
			     << "\nb- To load practice questions."
			     << "\nc- To modify the questions by adding a notation."
			     << "\nd- To display all or some of the questions."
			     << "\nWhat would be your choice(a-d): ";
			cin >> response;
			cin.ignore(100,'\n');
				if ( response == 'a' || response == 'A')
				 {	aStep(question,i);
				  }
				if ( response == 'b' || response == 'B')
				 {
					cout << '\n';	
					textRead(ques,i,numq);
					cout << "\nAll Questions Have Been Loaded.\n";
					}
				if ( response == 'c' || response == 'C')
				{
					modify(ques,i,numq);
				 }
				if (response == 'd' || response == 'D')
				{
					dStep(i,ques,numq);
					}
				cout << "\nWould you like to show the MENU again?(y- For Menu/Any letter to quit): ";
				cin >> repeat;
				cin.ignore(100,'\n');
		    }while(repeat  == 'y' || repeat == 'Y');
}

bool modify (reading ques[],int & i, int & numq) // function for modifing step
{
		ofstream out;
		int modi = 0;
		char temp [TEXT];
		int len; // variable to save the length of the the array inside the struct 
		int t = 0; 
		char response;

		do{
			cout << "Here are the Questions:\n";
			textRead(ques,i,numq);
			//load();
					cout << "\nwhich question would you like modify(Enter avilable numbers only PLEASE): ";
					cin >> modi;
					cin.ignore(100,'\n');
					modi-=1; // so i can get to my correct array of struct 
					cout << "The Question is:( " << ques[modi].text << " )" <<  '\n' << endl; 
					cout << "Is is it completed(y- completed/n- not completed): ";
					cin >> ques[modi].notation; 
					cin.ignore(100,'\n');
					len = strlen(ques[modi].text); // to get the length of text
					ques[modi].text[len-1] = ques[modi].notation; // to replace the previous notation with the new one
					/*
					if (ques[modi].notation == 'y' || ques[modi].notation == 'Y')
					{
						cout << "\nThe question is:( " <<  ques[modi].text << " )is now completed."  << endl;
					 }
					if (ques[modi].notation == 'n' || ques[modi].notation == 'N')
					{
						cout << "\nThe question is:( " << ques[modi].text << " )is now incompleted." << endl;
					 }
					*/
		//		int length;
					//length = strlen(ques);
					numq-=1;
					out.open(file);
				//	reWrite(ques,i);
					if(out)
					{
						while (t < numq ) // to re write everything into the file 
							{
								strcpy(temp,ques[t].text);
	
								out << temp << endl;
									t+=1;
							  }
					  }
					out.close();
					out.clear();
						if (ques[modi].notation == 'y' || ques[modi].notation == 'Y')
						{
							cout << "\nThe Question is:( " << ques[modi].text << " )is now completed." << endl;
						}
						else if (ques[modi].notation == 'n' || ques[modi].notation == 'N')
						{
							cout << "\nThe Question is:( " << ques[modi].text << " )is now incompleted." << endl;
						}

					cout << "\nWould You like to modify another question(y- Yes/Any Letter to go back to Menu)? ";
					cin >> response;
					cin.ignore(100,'\n');
					
				}while(response == 'y' || response == 'Y');

}
/*
bool reWrite(reading ques[],  int & i)
{

	ofstream out;
	int t = 0;
	out.open(file);

		if(out)
		{
			while(t < sizeof(ques))
			{
				out << ques[t].text << endl;
				t+=1;
			 }

		 }


}*/
bool textRead (reading ques[], int & i, int & numq)
{

	ifstream in;
	char temp [TEXT];
	int g =0;
	int t =0;
	 numq = 0;
	int count = 1;
	
		in.open(file);

	if(in)
	{
		//ques[i].ch = in.get();
		//while(t < 20 && !in.eof()) // to read each line of the file in every array of struct 
		do{
			 
			//	++numq; // to keep track of successful readings
			  in.get(temp,TEXT,'\n');
			  in.ignore(100, '\n');
			  strcpy(ques[g].text,temp);
			  g+=1; // to keep adding 1
			 // t+=1; // to keep adding 1
		/*	if (strcmp(temp," ")==0)
			 {	
				return false;
			  } */ if(numq ==t && !in.eof())
				{
					cout << "Question number " << count << " is( " << temp << " )\n"; 
			   	  }
			count +=1;
			t+=1;
			numq+=1;
			//  cout << ques[0].text << endl;
		//	cout << temp << endl;
		}while( t < STRUCT && !in.eof());
//		cout << ques[0].text << endl;
		
//		cout << ques[0].text << ":" << ques[1].text << endl;
		/*
		
  	  		in.get(temp,50,'\n');
			strcpy(ques[0].text,temp);
			cout << ques[0].text;
			cout << "hi" << endl;
		*/
	  }
		in.close();
		in.clear();

 		//return false;
}// end of function


bool dStep (int & i, reading ques[],int & numq)
{
	ifstream display;
	char response;
	int t = 0; // for while loop to stop when its array size is reached
	int show =0; // to read in user's answer
	int qNum; // to stroe how many questions read from file
	char anotherOne; // as djKhalid says 
	
	//	display.open(file);

		cout << "\nWould you like to display all questions?(y- to display all/n- to display some): ";
		cin >> response;
		cin.ignore(100,'\n');
				if (response == 'n' || response == 'N')
				{
					do{
						display.open(file);
						qNum = 0; // so it gets the value 0 eveytime we repeat
			
							if(display)
							 {
								while(t < STRUCT && !display.eof())// to read from file until reached struct size and eof
								{
									display.get(ques[t].text,TEXT,'\n');
									display.ignore(100,'\n');
									qNum+=1;
									t+=1;
									
								  } 

							   }
								display.close();
								display.clear();
					qNum-=1;//so i get the number correctly instead of having an if statment inside my loop above
					cout <<"\nThere are " << qNum  << " questions.\n" << "Which question would you like to display: ";
					cin >> show;
					cin.ignore(100,'\n');
					show-=1;
					cout << "\nThe Question is:( " <<  ques[show].text << " )" << endl;
					cout << "\nwould you like to display another question(y/n): ";
					cin >> anotherOne;
					cin.ignore(100,'\n');
					 	}while(anotherOne == 'y' || anotherOne == 'Y');
					}	
				else if ( response == 'y' || response == 'Y')
				{
					cout << "\nHere is the list of questions:\n";
					textRead(ques,i,numq);
				 }
				else 
					dStep(i,ques,numq); // to reapet if the user types something else
				/*display.open(file);
					if(display)
					{
						//while (!display.eof())
							do{
							display.get(all,1000,'\n');
							display.ignore(100,'\n');  
								//cout << "\nHere is the list of qestion:\n" << all << endl;
							cout << all << '\n';
							}while (!display.eof()); 
					//	cout << "Here is the list of question:\n" << all << endl;
					}
					display.close();
					display.clear();
					*/
}


void load () // i dont think i will need this anymore
{
	ifstream infile;
	char all [1000];
	int count =1;

			cout << "Here are the questions that have been loaded:\n";		
			infile.open(file);

				if(infile)
				{
					//infile.get();
						while(infile && !infile.eof())
						  {	
					
							infile.get(all,1000,'\n');
							infile.ignore(100,'\n');
							cout <<  all  <<  endl;
							//count+=1;		
					//cout << g;
			  			    }

				infile.close();
				infile.clear();
		}

}


bool qWrite (summer question[], int & i)
{

	ofstream out;
	//int i;
			out.open(file, ios::app);

			if(out)
			{
				out << question[i].qHard <<  ":" <<  question[i].qText << ":" << question[i].qType << ":" << question[i].qNotation << endl;

			 }
			out.close();
			out.clear();

}





bool aStep (summer question[],int & i)
{
	 i = 0;
	char response;
	//int len;
		  do {
			cout << "Enter the question's difficulty(1-5) (5 is the hardest): ";
			cin >> question[i].qHard;
			cin.ignore(100,'\n');
			cout << "Enter the question type(if,while..etc): ";
			cin.get(question[i].qType,SIZE,'\n');
			cin.ignore(100,'\n');
			cout << "\nWrite the question you would like to add:\n";
		//for (i =0; i<20;++i)
	//	{
			cin.get(question[i].qText,TEXT,'\n');
			cin.ignore(100,'\n');
		// }
			cout << "\nIs this question completed?(y- if it's completed/n- if it's not):";
			cin >> question[i].qNotation;
			cin.ignore(100,'\n');
				qWrite(question, i);// to write into the file
				++i;
			cout << "would you like to add another question(Any letter to repeat/n- To go back to Menu): ";
			cin >> response;
			cin.ignore(100,'\n');
				if (response == 'n' || response == 'N')
					return true;
			}while(i < STRUCT);

}



