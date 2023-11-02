#include "headers.h"
#include "PatternGen.h"
#define ROWS 9
#define COLS 20

void print_array(char lines[ROWS][COLS]){

  int x;
  for (x=0; x< ROWS; x++){
    printf("%s\n", lines[x]);
  }

}

int main(){
  char intro[ROWS][COLS]={ 
    "***************",
    "*             *",
    "*             *",
    "*             *",
    "*             *",
    "*             *",
    "*             *",
    "*             *",
    "***************"};
  int y; 
  
  clearScreen();
  print_array(intro);
  for(y=1; y< (ROWS-1); y++){   
    clearScreen();
    intro[y][y]='x';
    print_array(intro); 
    changeColor((y%3)+1);   
    intro[y][y]=' ';
  } 

  changeColor(4);

  return 0;
}
