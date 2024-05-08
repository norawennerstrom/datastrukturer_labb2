#include <iostream>
#include "sort.h"

int main() {
    // test
    std::vector<int> v = {1, 6, 3, 8, 1, 2, 6};

    for(auto& e : v) {
        std::cout << e << " ";
    } std::cout << "\n";

    insertion_sort(v.begin(), v.end());

    for(auto& e : v) {
        std::cout << e << " ";
    } std::cout << "\n";

    v = {1, 6, 3, 8, 1, 2, 6};

    selection_sort(v.begin(), v.end());

    for(auto& e : v) {
        std::cout << e << " ";
    } std::cout << "\n";

    v = {1, 6, 3, 8, 1, 2, 6};

    quicksort(v.begin(), v.end());

    for(auto& e : v) {
        std::cout << e << " ";
    } std::cout << "\n";

    v = {1, 6, 3, 8, 1, 2, 6};

    median_of_three(v.begin(), v.end());

    for(auto& e : v) {
        std::cout << e << " ";
    } std::cout << "\n";

}
