#include <stdio.h>

int main() {
    int persone[] = {13, 67, 18, 23, 9, 45, 67, 12, 55, 11, 5, 99, 6, 12};

    for (int i = 0; i < 13; i++) {
        if (persone[i] >= 18) {
            printf("eta': %d - posizione nell'array: %d\n", persone[i], i);
        }
    }
    return 0;
}
