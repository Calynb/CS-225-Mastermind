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
 

  return 0;
}
