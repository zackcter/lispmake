#include <stdio.h>

typedef struct {
    double real;
    double imag;
} cmplx;

void printworld(int n) {
    for (int i = 0; i < n; i++){
        puts("Hello World!");
    }
}

int main(int argc, char** argv) {
    cmplx mauer = { .real = 3.2, .imag = 3000.2 };
    //printf(mauer.imag);
    printworld(5);
}
