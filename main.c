#include <stdio.h>


int mult(int a, int b) {
    return a * b;
}

int main(int argc, char* argv[]) {
    printf("Here you go: %d\n", mult(4,5));
    return 0;
}
