#include <stdio.h>

int main() {
    int x = -4;         
    int zero_count = 0; 
    int minus_sum = 0;  
    int plus_sum = 0;  

    if (x == 0) {
        zero_count += 1;  
    } else if (x < 0) {
        minus_sum += x;   
    } else {
        plus_sum += x;    
    }

    printf("Zero count: %d\n", zero_count);
    printf("Minus sum: %d\n", minus_sum);
    printf("Plus sum: %d\n", plus_sum);

    return 0;
}
