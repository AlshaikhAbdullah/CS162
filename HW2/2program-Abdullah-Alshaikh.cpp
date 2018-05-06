//Abdullah Alshaikh - CS 162
// CS 162 - program to help a user to count from 1 - 10 in japanese 
/*









*/
#include <iostream>
#include <cstring> 
#include <cstdlib>
#include <ctime>
#include <cctype>
using namespace std;

const int SIZE = 20;

bool levelTwo(); // level 2 Function

bool levelOne();// level 1 function

void welcome(); // welcome function 

int right(); // function if the user enters a correct answer

void tryagain();// function if the user enters a wrong answer 

bool levelThree();// level three function 











int main ()
{


//char z;


//int points1 = 0;
           //levelOne ();
         if (levelOne())
           {
                      return 0;
            }


        if (levelTwo ())
	 {
                   return 0;
	 }

	levelThree();




       return 0;
}







bool levelOne ()
{





	      char cont;
              int points1 = 0;
              char response1;
              char majorResponse1;
              char guess [SIZE];
              char engNums [10] [SIZE] = {"one" ,"two","three","four","five","six","seven","eight","nine","ten"};
              char japNums [10] [SIZE] = {"ichi","ni","san","shi","go","roku","nana","hachi","ku","ju"};
              srand (time(0));
              int r; 
              char quit;
              //int len;
              //int eng;
//char pred [SIZE];
//pred = japNums[rand()%10];
/* strcpy(japNums[0],"ichi");
strcpy(japNums[1],"ni");
strcpy(japNums[2],"san");
strcpy(japNums[3],"shi");
strcpy(japNums[4],"go");
strcpy(japNums[5],"roku");
strcpy(japNums[6],"nana");
strcpy(japNums[7],"hach");
strcpy(japNums[8],"ku");
strcpy(japNums[9],"ju");*/
            //len = strlen(japNums[i]);
            //eng = strlen(engNums[i]);
            cout << "\n\nIn the First Level words of numbers will be showen\n"
                 << "and you are going to have to guess the number in english\n"
                 << "type from one to ten in small letters please\n"
                 << endl;
            cout << "Good Luck !!\nEnter any letter to continue: ";
            cin >> cont;
	    cin.ignore(100,'\n'); 

       do{
              int i = 0;
              for (i = 0; i < 10; ++i)
              {
                      if (points1 == 5)
                         {
                               return false;
                         } 
                  //strcpy(japNums[rand()%10],pred);
                      r =  rand()%10;

                      cout <<"\n' " << japNums[r] << " '- What is this number: ";
                 // strcpy(japNums,pred);
                      cin >> guess;
                      cin.ignore(100,'\n');

                          // check if its not a word dont forget

                          if (strcmp(japNums[r],japNums[0]) == 0)
                           {// main if to check whats the rand
                              if(strcmp(engNums[0],guess) == 0)
                               {
                                  right();
                                  points1+=1;
                                  cout << "you got " <<points1 << " points" << endl;
                                }
                              else 
                                   tryagain();
                           }//end of main if  
                          if (strcmp(japNums[r],japNums[1]) == 0)
                           {
                              if (strcmp(engNums[1],guess) == 0)
                               {
                                   right(); 
                                   points1+=1;
                                   cout << "you got " << points1 << " points" << endl;
                                }
                              else 
                                   tryagain(); 
                            } 
                           if (strcmp(japNums[r],japNums[2]) == 0)
                            {
                               if (strcmp(engNums[2],guess) == 0)
                                {
                                    right();
                                    points1+=1;
                                    cout << "you got " << points1 << " points" << endl;
                                 }
                               else 
                                    tryagain();
                            }
                           if (strcmp(japNums[r],japNums[3]) == 0)
                            {
                                if (strcmp(engNums[3],guess) == 0)
                                  { 
                                     right();
                                     points1+=1;
                                     cout << "you got " << points1 << " points" << endl;
                                   }
                                else 
                                     tryagain();

                            } 
                           if (strcmp(japNums[r],japNums[4]) == 0)
                            { 
                                if (strcmp(engNums[4],guess) == 0)
                                 {
                                     right();
                                     points1+=1;
                                     cout << "you got " << points1 << " points" << endl;
                                  }
                                 else 
                                     tryagain();
                             }
                            if (strcmp(japNums[r],japNums[5]) == 0)
                             {
                                 if (strcmp(engNums[5],guess) == 0)
                                  {
                                      right();
                                      points1+=1;
                                      cout << "you got " << points1 << " points" << endl;
                                    }
                                 else 
                                      tryagain();
                             }
                            if (strcmp(japNums[r],japNums[6]) == 0)
                             {
                                 if (strcmp(engNums[6],guess) == 0)
                                  {
                                      right();
                                      points1+=1;
                                      cout <<"you got " << points1 << " points" << endl;
                                   }
                                 else 
                                      tryagain();
                             }
                            if (strcmp(japNums[r],japNums[7]) == 0)
                             {
                                 if (strcmp(engNums[7],guess) == 0)
                                  {
                                      right();
                                      points1+=1;
                                      cout << "you got " << points1 << " points" << endl;
                                   }
                                 else 
                                      tryagain();
                             }
                            if (strcmp(japNums[r],japNums[8]) == 0){
                                 if (strcmp(engNums[8],guess) == 0)
                                  {
                                      right();
                                      points1+=1;
                                      cout << "you got " << points1 << " points" << endl;
                                    }
                                  else
                                      tryagain();
                             }
                            if (strcmp(japNums[r],japNums[9]) == 0){
                                 if (strcmp(engNums[9],guess) == 0)
                                  {
                                      right();
                                      points1+=1;
                                      cout << "you got " << points1 << " points" << endl;
                                    }
                                 else 
                                      tryagain();
                             } 
                               cout << "\nWould you like to continue guessing?(Enter any key to continue/ q- to quit): ";
                               cin >> quit;
                               cin.ignore(100,'\n');
                                          if (quit == 'q'){
                                                  return true;
                                           }
                                         // else
                                            // cout << "glad\n"; 

                  } // end of for loop
           cout << "would you like to repeat the level(y/n): ";
           cin >> response1;
           cin.ignore(100,'\n');

       }while(response1 == 'y'); 

}//end of level 1 function 










bool levelTwo(){// level two function






                char num [10] [SIZE] = {"ichi","ni","san","shi","go","roku","nana","hachi","ku","ju"}; 
                char onum [SIZE];
                int r; //Variable to save random genertor number in for the random number picked
                int len; // to save the length of the word
                int w; // variable to save random genertor number in for the missing letter 
                char missLetter; // to save the missing letter so i can compare
                char guess; // to read in from the user
                int points1 = 0;
                char end;
		char cont;
		char repeat;

	do {
                srand (time(0));
                 cout << "\nCongrats!!! You got to the second level\n"
                      << "you are going to have to guess the letter missing from the numbers now\n"
                      << "Good Luck\nEnter any letter to continue: ";
		 cin >>cont;
		 cin.ignore(100,'\n');
                   int i = 0;
                   for (i =0; i< 10; ++i)
                   { 
                        if (points1 == 5)
                         {
                            cout << "\n\nYou are ready for the last level :)" << endl;
                             return false;
                          }

                           r = rand() %10;
                           strcpy(onum,num[r]);// to cope the random word into another array
                           len = strlen(onum); // to get the length of the array so i can mod correctly 
                           w = rand() % len; // get the length of the array with the random word  
                           missLetter = onum[w]; // to store that random letter 
                           onum[w] = '_'; // to replace the random letter picked to _
                           cout << "\nGuess what is the missing letter of: " <<  onum  << " \nYour guess: ";
                           cin >> guess;
                           cin.ignore(100,'\n');

                              //if(!isalpha(guess))

                              if(guess == missLetter || toupper(missLetter)) // to see if the guesst letter is correct
                               {
                                    points1+=1;
                                      cout << "Correct!!! You get 1 point :)\n"
                                           << "You have " << points1 << " points" << endl;
                                }//if statment ends
                              else
                                {
                                 tryagain();
                                }
                            cout << "\n\nwould you like to continue guessing(type any key to continue/q- to quit): ";
                            cin >> end;
                            cin.ignore(100,'\n');
                                 if (end == 'q')
				  {
                                       return true;
				   }
       }// for loop ends here 

		cout << "would you like to repeat the level(y/n): ";
		cin >> repeat;
		cin.ignore(100,'\n');
		}while(repeat == 'y');



} // end of level 2 function 




bool levelThree(){ //level 3 functon

                char nums [10] [SIZE] = {"ichi","ni","san","shi","go","roku","nana","hachi","ku","ju"}; 
                char onum [SIZE];
                int r;
                int len; // to save the length of the words 
                int w; // to get a random number 
                int t;// to get another random letter 
                char miss1;// to save the missed letter 
                char miss2; // to save second missed letter 
                char guess1; // to save user's guess
                char guess2;// to save the second guess 
                char quit;// to save users response 
		int s;
		char miss3;
		char guess3;
		int points = 0;
		int right = 0;
		char repeat;
	do{
                srand (time(0));
                cout << "\nCongrats !!! you got to the final level ..\n"
                     << "would you like to continue ?(any key to continue/ q- to quit the program): ";
                cin >> quit;
                cin.ignore(100,'\n');
		cout << "1 - 3 letters will be missing now\n answer each letter a time\n"
		     << "Enter any leter to continue: ";
		cin >> repeat;
		cin.ignore(100,'\n');
                        if (quit == 'q')// returns to amin function
                         {
                                    return true;
                          }
                      int i; 
                      for (i =0; i<10; ++i) // to prompt the user ten times 
                        {
                           if (points == 5)
			   {
				cout << "Congrats !!!!!!!\nYou Are a WINNER !!!!!!" << endl;
						return true;
			     } 




			      r = rand()%10;//to get a random number 
                              strcpy(onum,nums[r]);// to copy that random word so i know what it is 
                              len = strlen(onum);//to get the length of the word so i can do my calcultions 
                              w = rand()%len;//to get a random number 
                              miss1 = onum[w];// to save that random letter 
			      t = rand() %len;// to get a random letter 
			   		while (t == w)
					{
						t = rand()%len;
					 }
                              miss2 = onum[t];// to save that random letter 
			      s = rand() %len; // to get a random number 
					while (s == w || s == t)
					{
						s = rand()%len;
					 }
                              miss3 = onum[s];// to save that random letter 

				//len -=1;
				   if (len == 2)// if the the word is less than or equal to two letters 
                                    { 

                                        onum[w] = '_';
                                        cout << "\nGuess the missing letter of: " << onum << " \nThere is 1 letter missing" << endl;
                                        cout << "The missing letter is: ";
					cin >> guess1;
                                        cin.ignore(100,'\n');
						if(guess1 == miss1)
						{
							points+=1;
							cout << "You got " << points << " point/s now" <<endl;
						 }
						else
							tryagain();
                                      }


                                   if (len == 3) // if the word is three words 
				    {
					onum[w] = '_';
                                        onum[t] = '_';
					cout << "\nGuess the missing letters of: " << onum << " \nThere are 2 letters missing" << endl;
                                        cout << "The first letter is: ";
                                        cin >> guess1;
            				cin.ignore(100,'\n');
						  if (guess1 == miss1 || guess1 == miss2)
						    {
							  right+=1;
							}
					cout << "The second letter is: ";
					cin >> guess2;
					cin.ignore(100,'\n');
						  if (guess2 == miss2 || guess2 == miss1)
						    {
							right+=1;
							}
					if (right == 2)
					 {
						points+=1;
						cout << "You got " << points << " point/s" << endl;
					  }
					else 
						tryagain();
                                      } // if for three letters ends here

				   if (len > 3) // if statment if the word more than three words
				    {
					onum[w] = '_';
					onum[t] = '_';
					onum[s] = '_';
					cout << "\nGuess the missing letters of: " << onum << " \nThere are 3 letters missing" << endl;
					cout << "the first letter is: ";
                                        cin >> guess1;
					cin.ignore(100,'\n');
						if(guess1 == miss1 || guess1 == miss2)// if the first letter is guessed right a point will be counted 
						{
							right+=1;
						}
						else if (guess1 == miss3)
								right+=1;
					cout << "\nthe second letter is: ";
					cin >> guess2;
					cin.ignore(100,'\n');
						 if(guess2 == miss2 || guess2 == miss1) // if the second letter guess is correct a point will be counted 
						 {
							right+=1;
						  }
						else if (guess2 == miss3)
							right+=1;
					cout << "\nthe third letter is: ";
					cin >> guess3;
					cin.ignore(100,'\n');
						 if (guess3 == miss3 || guess3 == miss2) //if the third letter guess is correct a point will be counted
						  {
							right+=1;
						   }
						else if (guess3 == miss1)
							right+=1;
					if (right == 3) // if the guesses are correct a point will be counted
					{ 
						points+=1;
						cout << "You got " << points << " point/s" << endl;
					 }
					else 
						tryagain();
				     }
					cout << "Would you like to continue(any letter to continue/q- to quit): ";
					cin >> quit;
					cin.ignore(100,'\n');
						if (quit == 'q')
						 {
							return false;
						  }

                          } // end of for loop 


			cout << "Would you like to repeat the level(y- to repeat/n- to quit): ";
			cin >> repeat;
			cin.ignore(100,'\n');
			}while(repeat == 'y' || repeat == 'Y');



}// level 3 ends here


void tryagain ()
{ // function if the answered wrong
         //char response; 
               cout << "WRONG !!!!\n" << endl;
               //cin >> response;
               //cin.ignore(100,'\n'); 

}//end of tryagain function







int right()
{ // function if the uesr answered right
          //int points1;
    
            //points1+=1;

            cout << "\nCorrect Answer :)" << endl;
}//end of right function
