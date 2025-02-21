#include <stdio.h>

struct Point {
    int x;
    int y;
};

void display(struct Point p) {
    printf("Point Coordinates: (%d, %d)\n", p.x, p.y);
}

int main() {
    struct Point p = {10, 20};
    display(p);
    return 0;
}
