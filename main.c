#include <stdio.h>


int mult(int a, int b) {
    int r;
    for (r = 0; b > 0; r+=a, b--);
    return r;
}

int main(int argc, char* argv[]) {
    printf("Here you go: %d\n", mult(4,5));
    return 0;
}
