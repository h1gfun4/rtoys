#include <stdio.h>
#include <stdlib.h>
int main(void){
  
  const double pi = 3.141592;
  double R = 3;
  double S,L = 2*pi*R;
  S = pi*R*R;
  printf("Длинна окружности радиуса %.2f:%f\n",R,L);
  printf("Площадь круга радиуса %.2f:%f\n",R,S);
  
  return 0;
}
