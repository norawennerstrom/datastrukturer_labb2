//
// Created by Nora Wennerström on 2024-05-06.
//

#ifndef LABB2_SORT_H
#define LABB2_SORT_H

#include <vector>

using intIt = std::vector<int>::iterator;

void insertion_sort(intIt begin, intIt end);

void selection_sort(intIt begin, intIt end);

void quicksort(intIt begin, intIt end);

intIt partition(intIt begin, intIt end);

void median_of_three(intIt begin, intIt end);

intIt med_of_three_partition(intIt begin, intIt end);

#endif //LABB2_SORT_H
