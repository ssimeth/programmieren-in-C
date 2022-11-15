#include<stdio.h>

void copperfield (int x, int y);

void copperfield (int a, int b){
  int c;
  c = a;
  a = b;
  b = c;
}

int main(){
    
  int x = 10, y = 20;
  copperfield(x, y);
        
  /* Ausgabe */
  printf("x: %d  y: %d\n", x, y);
}
/* Ausgabe */

