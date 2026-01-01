#include <iostream>
#include <cmath>

void update(int *a, int *b) {
    int temp = *a;
    *a = *a + *b;

    *b = std::abs(temp - *b);
}



int main() {

    int a, b;

    int *pa = &a;
    int *pb = &b;

    update(pa, pb);

    return 0;
}