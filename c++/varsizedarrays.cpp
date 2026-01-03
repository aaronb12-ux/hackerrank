#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    int numArrays, numQueries;
    std::cin >> numArrays >> numQueries;
    
    //read in arrays
    std::vector<std::vector<int>> arrays(numArrays); 
    for (int i = 0; i < numArrays; i ++) {
        int n;
        std::cin >> n;
        arrays[i].resize(n);
        for (int j = 0; j < n; j++) {
            std::cin >> arrays[i][j];
        }
    }
    
    //read in queries
    std::vector<std::pair<int, int>> queries(numQueries);
    for (int i = 0; i < numQueries; i ++) {
        std::cin >> queries[i].first >> queries[i].second;
    }

    
    
    for (const auto &query: queries) {
        
        auto arr = query.first;
        auto location = query.second; //+1 for the length offset
    
        int element = arrays[arr][location]; //accessing the target element
        
        std::cout << element << std::endl; //printing to stdout
    }
     
    return 0;
}
