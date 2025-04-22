#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int num = rand();
    printf("Número aleatori: %d\n", num);
    return 0;
}
