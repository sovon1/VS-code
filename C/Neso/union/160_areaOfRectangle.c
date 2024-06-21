//i will give you harder one next time
#include <stdio.h>

struct Rectangle {
    int length;
    int width;
};

int calculateArea(struct Rectangle rectangle) {
    return rectangle.length * rectangle.width;
}

int main() {
    struct Rectangle rectangle;

    printf("Enter the length of the rectangle: ");
    scanf("%d", &rectangle.length);

    printf("Enter the width of the rectangle: ");
    scanf("%d", &rectangle.width);

    int area = calculateArea(rectangle);
    printf("The area of the rectangle is: %d\n", area);

    return 0;
}