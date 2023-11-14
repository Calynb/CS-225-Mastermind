/************
* Author: Calyn Bauer, Lauren Bailey, and Issac Jarrells
* CS 225 Project
* Purpose: Converts numbers to colors. Colors correspond to a capital letter.
* Resources: George helped us return the rand_nums rn.
* * Previous Version March 30, 2023
*  Version 1.0 October 26, 2023
*              1.1 October 31, 2023
*************/
#include "headers.h"
#include "PatternGen.h"
using namespace std;
//Create loop to convert numbers to colors/letter
char numbers_to_colors(int number)
{
  if (number==2) //red
  {
    return 'R';
  }
  
  else if (number==3) //blue
  {
    return 'B';
  }
  
  else if (number==4) //green
  {
    return 'G';
  }
  
  else if (number==5) // yellow
  {
    return 'Y';
  }
  
  else if (number==6) // magenta
  {
    return 'M';
  }
  
  else // cyan
  {
    return 'C';
  }
  
}

rand_nums PatternGenerator() 
{
  srand(time(NULL));
  
  // declare random numbers
    rand_nums rn;
  
  rn.num_1= numbers_to_colors(rand()%6+2);
  rn.num_2= numbers_to_colors(rand()%6+2);
  rn.num_3= numbers_to_colors(rand()%6+2);
  rn.num_4= numbers_to_colors(rand()%6+2);
  
  // printf("%c %c %c %c \n",rn.num_1, rn.num_2,rn.num_3, rn.num_4); // for testing purposes only
  return rn;
}
