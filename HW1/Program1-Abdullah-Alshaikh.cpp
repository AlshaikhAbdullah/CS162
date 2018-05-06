//Abdullah Alshaikh - Program 1
//Class: CS162 - Converting Currency Program for the CS Department
/*this program will help the CS depatment members to convert their 
US dollars money to Chinese Yuan and also will help telling them 
what kind of paper bills they can have from a US dollars amount 
to a Chinese Yuan paper bills. Finally, it will help convert Chinese Yuan paper bills to US Dollars total amount*/ 

#include <iostream>
#include <cctype>
using namespace std;


int main()
{

char responseYuan; //variable to read in the response for first option
float Yuan; // Variable to read in the amount of dollars to convert
char majorResponse;// variable to read in the answer that would repeat the process for the user
float Dollar; // Variable to read in the amount of Yuan to convert
int paperBill; // Variable to read in the amount of dollars to convert to paper bills in Yuan
int hundreds; // Variable to store the paper bills for 100's 
int fiftes; // Variable to store the paper bills for fiftes
int twenties; // Variable for 20's
int tens; // Variable for 10's
int ones; // Variable for 1's
char phaseTwo; // Variable to read in response for Phase 2
float cents; // Variable to display the remainder cents
char phaseLast; // Varible to read in response for last phase
int leftHundreds; // Varible to read in the 100's left over 
int leftFiftes; // Varible to read in the 50's left over
int leftTwenties; // VArible to read in the 20's left over
int leftTens; // Varible to read in the 10's left over 
int leftOnes; // Varible to read in the 1's left over 
float leftOver; // Varible to display the total left over in Dollars 
float totalLeft; // Varible to sum the whole left over 
char repeatPhase2; //Variable to read in repeat response for phase2 
char repeatPhase3; //Variable to read in repeat response for phase3
 
    cout << "\nWelcome !!!  \nCS department member of PSU\n" << endl;
    cout << "I will assist you in your trip to China by"
         << " \nconverting your US dollars to Chinese Yuan and vice versa."
         << endl;
    cout << "Also, I'm going to help you organize your paper bills\nand left"
         << "over after your done with your trip.\n" << endl;


       do{   // do while to keep the process going until user types n in the repeating prompt 

              cout << "I'm assuming you just arrived to china,\nDo you wish to convert to Chinese Yuan?(y/n): ";
              cin >> responseYuan;
              cin.ignore(100,'\n');

                  if (responseYuan == 'y'){ // if statment  to read respnose from user and propt whats' next
                           cout << "\nEnter the amount of US dollars you wish to convert to Yuan please: ";
                           cin >> Yuan; 
                           cin.ignore(100,'\n');
                        if(Yuan <0){
                             do{ // a loop to repeat the process if a negtive value is entered 
                                 cout << "\nEnter a postive value PLEASE: ";
                                 cin >> Yuan;
                                 cin.ignore(100,'\n');
                                 }while(Yuan < 0); // part of the loop that will keep ask the user if negative value is entered  to convert to Yuan 
                                   }// end of if statment of it's a negative value
                           Yuan *= 6.50824; // the calcukations to convert from US Dollars to Chinese Yuan
                           cout << "\nThe amount you entered makes: " << Yuan << " Chinese Yuans.\n" <<endl;
                      } // end of if statement of reading the response 

                   if (responseYuan == 'n'){ // if statment if the user wants to convert to US Dollars
                        do{ // a do while loop in case the user entered a negtive value, it will keep asking the user
                           cout << "Then you must want to convert to US Dollars, Enter the amount of Yuan please: ";
                           cin >> Dollar;
                           cin.ignore(100,'\n');
                           }while(Dollar < 0);

                        Dollar /= 6.50824; // the calculation to convert from Chinese Yuan to US Dollars
                        cout << "\nThe amount you entered makes: $" << Dollar << "  US Dollars\n" << endl;

                              }//end of if statment of converting to US Dollars

              cout << "Do you want to convert again? (y/n): ";
              cin >> majorResponse;
              cin.ignore(100,'\n');

           }while (majorResponse == 'y'); // the end of the major loop that will repeat the whole process

   cout << "\nNext service will get you the paper bills in Chinese Yuan for an amount you wish in US Dollars." 
        << endl; 
   cout << "\nDo you wish to continue for Paper Bills? (Pres Any Key To Continue/e- To End Program): ";
   cin >> phaseTwo;
   cin.ignore(100,'\n');

         if(phaseTwo == 'e'){

              cout << "\nThank You For Using The Program :)" << endl;
               return 0; }

 do{//a loop to repeat if the user wants to 
   cout << "\nEnter the amount of Dollars you want to know the paper bills for in Yuan: ";
   cin >> paperBill;
   cin.ignore(100,'\n');
             if(paperBill <0){ //staement to check if value is negative
               do{ // do while to repeat the process if a negtive number value is entered
                  cout << "Enter a postive Value PLEASE: ";
                  cin >> paperBill;
                  cin.ignore(100,'\n');
                  }while(paperBill < 0);
                }//end of if statment
   paperBill *= 6.50824;
   cout << "\nThat's around: " << paperBill << " Chinese Yuan." << endl;
   cout << "The Paper Bills you will have for this amount are: " << endl; 
           if( paperBill >= 100){ // to check if the amount is bigger than 100 to do the math correctly
                 hundreds = paperBill / 100;
                 cout <<  hundreds << " Hunderds." <<  endl;
            }
       paperBill %= 100; // to get the remainder of the  total
            if(paperBill>= 50){ // to check if the rest is bigger or equal than 50 so it can continue with the fiftes
                 fiftes = paperBill / 50; 
                 cout << fiftes << " Fiftes." << endl; 
              }

       paperBill %= 50; // to get the remainder from the rest and the rest are the same for every Paper Bill
           if(paperBill >= 20){
                 twenties = paperBill / 20; 
                 cout << twenties << " Twenties." << endl;  

             }
       paperBill %= 20;
            if(paperBill >= 10){
                 tens = paperBill / 10;
                 cout << tens << " Tens." << endl;
              }
       paperBill %= 10;
            if(paperBill >= 1){
                 ones = paperBill / 1;
                 cout << ones << " Ones." << endl << endl;
              }
    cout << "Would you like to repeat this Phase? (y/n)";
    cin >> repeatPhase2;
    cin.ignore(100,'\n');
   }while (repeatPhase2 == 'y');//end of loop statment for repeating phase two

   cout << "\nThe last service I will convert the Yuan paper bills you have to US Dollars" 
        << endl;
   cout << "\nDo you wish to continue to our last service(Left Over)? (Press Any Key To Continue / e- To End Program ): ";
   cin >> phaseLast;
   cin.ignore(100,'\n');
       if(phaseLast == 'e'){ // to end program if user wants t o
              cout << "\nThank You For Using Our Program :)\n" << endl;
              return 0; 
         }
do{// a loop if the uesr wants to repeat the last phase 3
   cout << "\nEnter the amount of the following bills:\n";
   cout << "How many hundred bills: ";
   cin >> leftHundreds;
   cin.ignore(100,'\n');
        if(leftHundreds <0){//to check value entered is negative 
           do{
            cout << "Enter Postive Number  PLEASE: ";
            cin >> leftHundreds;
            cin.ignore(100,'\n');
            }while (leftHundreds <0);
          }//end of if statment for the hundreds
   leftHundreds *= 100;//to know how much the value entered for 100's
   cout << "How many fifty bills: ";
   cin >> leftFiftes;
   cin.ignore(100,'\n');
        if(leftFiftes <0){//to check if value entered is negative 
            do{
              cout << "Enter Postive Value PLEASE: ";
              cin >> leftFiftes;
              cin.ignore(100,'\n');
              }while(leftFiftes <0);
            }//end of if statment for the fiftes
   leftFiftes *= 50;//to know howm much the value entered for 50's
   cout << "How many twenty bills: ";
   cin >> leftTwenties;
   cin.ignore(100,'\n');
         if(leftTwenties <0){//to check if negatvie value is entered
             do{
               cout << "Enter Postive Value PLEASE: ";
               cin >> leftTwenties;
               cin.ignore(100,'\n');
               }while(leftTwenties <0);
            }//end of if statment for Twenties
   leftTwenties *= 20;//to know how much the value entered for 20's
   cout << "How many ten bills: ";
   cin >> leftTens;
   cin.ignore(100,'\n');
            if(leftTens <0){// to check if negative value is entered
              do{ 
                cout << "Enter a Postive Value PLEASE: ";
                cin >> leftTens;
                cin.ignore(100,'\n');
                }while(leftTens <0);
             } // end of if sttament for Tens
   leftTens *= 10; // to know how much the value entered for 10's
   cout << "How many ones: ";
   cin >> leftOnes;
   cin.ignore(100,'\n');
           if(leftOnes <0){// to check if negative value is entered
               do{
                cout << "Enter Postive Value PLEASE: ";
                cin >> leftOnes;
                cin.ignore(100,'\n');
                }while(leftOnes <0);
             }// end of if stsament for the Ones
   leftOnes *= 1;//to know how much the value entered for 1's
   totalLeft = leftHundreds + leftFiftes + leftTwenties + leftTens + leftOnes; // to sum the whole value so i can the calue in dollar
   leftOver = totalLeft / 6.50824; // to get the amount in dollars
   cout << "\nThat's About: " << totalLeft << " Yuans." << endl; // show amount in Yuan 
   cout << "\nYour Total Left Over From Your Trip is $" << leftOver << " US Dollare.\n" << endl; // show amount in dollars
   cout << "Would you like to repeat this Phase?(y/n): ";
   cin >> repeatPhase3;
   cin.ignore(100,'\n');
  }while(repeatPhase3 == 'y');//end of loop that repeats last phase 3
   cout << "\nWe Hope You Enjoyed Your Trip\n";
   cout << "\nHave a great day :)\n" << endl; 
   
    return 0;
             }
