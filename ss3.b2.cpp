#include <stdio.h>

int main() {
    double celsius;
    printf("Nhap nhiet do theo do Celsius: ");
    scanf("%d, &celsius");
    double fahrenheit = (celsius * 9.0 / 5.0) + 32;
    printf("Nhiet do tu Celsius sang Fahrenheit la: %.2f", fahrenheit);
    
    return 0;
}
