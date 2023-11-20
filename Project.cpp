/************
* Author: Calyn Bauer, Lauren Bailey, and Issac Jarrells
* CS 225 Project
* Purpose: This file asks the user if they want to play mastermind, then runs the MasterMind function if they do.
* Previous Version 1.7 Apr 1, 2023 
* Versions 2.0 Oct 19, 2023
* Versions 2.1 Oct 31, 2023
* Versions 2.2 Nov 11, 2023
* Versions 2.3 Nov 20, 2023
*************/
#include "PatternGen.h" 
#include "headers.h"
// Prototypes of functions used
int MasterMind();
char numbers_to_colors(int);
int main()
{
   char ans1, ans2;
   int x; // for loop veriable
   FILE* f =  fopen("rules.txt" , "r");   
   char rules[500];
    
   cout<<("Do you wanna play Mastermind? (y/n) ");
   cin>>ans1;   
   cout<<(" ")<<endl;

   if (toupper(ans1) =='Y') {
      for (x=0;x<1; x++){
        fgets(rules, 500, f);             //prints the rules from the text file
        printf("%s" , rules);
      }
  
  cout<<(" ")<<endl;
   cout<<"Are you ready to play? (y/n) ")<<endl;
   cin>>ans2;
   //play game
      while (ans2 == 'y' || ans2=='Y') { 
      MasterMind();
   // prompt user if they want to play agian
      printf("\nDo you want to play again? (y/n) ");  
      cin>>ans2;
      }
      }
   printf("Have a nice day!\n");
}
