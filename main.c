#include <stdio.h>
#include <stdlib.h>

int mult(int a, int b) {
    int r;
    for (r = 0; b > 0; r+=a, b--);
    return r;
}

int main(int argc, char* argv[]) {
    if (argc < 3) {
        printf("Error: must have 2 params.\n");
        return -1;
    }
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    printf("Here you go: %d\n", mult(a,b));
    return 0;
}
