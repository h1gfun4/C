#include <stdio.h>

int main (int argc, const char* argv[]){
    printf("helloworld \n");
    printf("this is new row\n");

    // %d
    // %s
    // %c
    // %f
    // %lf
    // %x
    // %%

    int a = 50;
    printf("text and%5d%%", a);

    int number = -56; // 4 bytes -2.147.000.000... +2.147.000.000
    unsigned char symblo = 'A'; // 0...255
    float real = 5.345f; // 4 butes
    double realdouble = 5;
    // no boolean type 
    int true = 1;
    int false = 0;
    char sym = 75; // 1 byte -128...127
    return 0;
}