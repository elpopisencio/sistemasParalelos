#include <stdio.h>

int promedio(int a, int b){
  return (a + b) / 2;
}

int main(void) {
  int x, y, p;
  x = 10;
  y = 20;
  p = promedio(x,y);
  printf("Los datos para calcular el promedio son %d y %d\n El resultado es: %d\n", x, y, p);
  return 0;
}
