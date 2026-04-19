#include <stdio.h>

int main(){
    double width = 32.3;
    double height = 10.5;
    double perimeter = 0;
    double area = 0;

    perimeter = 2 * (width + height);
    area = width * height;

    printf("Width is: %.2f\nHeight is: %.2f\nPerimeter is: %.2f\n", width, height, perimeter);
    printf("The area of the rectangle is: %.2f\n", area);
}
