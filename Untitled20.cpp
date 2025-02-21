#include <stdio.h>

struct Rectangle {
    int length;
    int width;
};

int area(struct Rectangle r) {
    return r.length * r.width;
}

int main() {
    struct Rectangle r = {10, 5};
    printf("Area of rectangle: %d\n", area(r));
    return 0;
}
