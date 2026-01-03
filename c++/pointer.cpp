#include <iostream>
#include <cmath>

void update(int *a, int *b) {
    int temp = *a; //making tempoerary value at dereferenced value of a -> temp stores a's value
    *a = *a + *b; //the value at a is equal to the value of a + value of b

    *b = std::abs(temp - *b); //the value at b is updated
}



int main() {

    int a, b;

    int *pa = &a; //pa points to the memory address of a
    int *pb = &b; //pb points to the memory address of b

    update(pa, pb); //whatever changes made to pa and pb in here will affect a and b because they share the same memory adress

    //a and b should be updated now

    return 0;
} 