#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float num;
    scanf("%f", &num); // Input a floating-point number
    printf("%s", welcome());
    return 0;
}