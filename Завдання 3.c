#include <stdio.h> //введення бібліотек
#include <math.h>
 int main() {
    int r=3, h=10; //введення змінних
    float S=2*M_PI*r*h, V=M_PI*pow(r,2)*h;
    printf("Площа бічної поверхні циліндра=%.2lf \n", S); //виведення чисел із сталих змінних
    printf("Об'єм циліндра=%.2lf \n", V);
   return 0;
     }
