#include <stdio.h>

int main() {
    int x = 7;         
    int y = 3;        

    y = (x > y) ? (x - y) : (y - x); 
    printf("Absolute difference stored in y: %d\n", y);

    return 0;
}
