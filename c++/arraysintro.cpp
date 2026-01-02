#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int length;
    int num;
    std::vector<int> arr;
    int iteration = 0;

    while (std::cin >> num) {
        if (iteration == 0) {
            length = num;
        } else {
            arr.push_back(num);
        }
        iteration += 1;
    }
    
    for (int i = length - 1; i >= 0; i--) {
        std::cout << arr[i] << " ";
    }
    
     return 0;
}
