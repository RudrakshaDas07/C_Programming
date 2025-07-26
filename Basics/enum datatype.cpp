#include <stdio.h>
enum direction {
    EAST, NORTH, WEST, SOUTH
};
int main() {
    enum direction dir = NORTH;
    printf("%d\n", dir);
    return 0;
}