//
// Created by Nora Wennerström on 2024-05-06.
//

#include "sort.h"

void insertion_sort(intIt begin, intIt end) {

    int i = 1;

    while(i < std::distance(begin, end)) {
        int j = i;

        while(j > 0 && begin[j - 1] > begin[j]) {
            std::swap(begin[j], begin[j - 1]);
            j--;
        }

        i++;
    }
}

void selection_sort(intIt begin, intIt end) {

    size_t size = std::distance(begin, end);

    for(int i = 0; i < size; i++) {
        int min_element = i;

        for(int j = i+1; j < size; j++) {
            if(begin[j] < begin[min_element]) {
                min_element = j;
            }
        }

        if(min_element != i) {
            std::swap(begin[i], begin[min_element]);
        }
    }
}

void quicksort(intIt begin, intIt end) {
    if(begin < end - 1) {
        auto p = partition(begin, end);
        quicksort(begin, p);
        quicksort(p, end);
    }
}

void median_of_three(intIt begin, intIt end) {
    if(begin < end - 1) {
        auto p = med_of_three_partition(begin, end);
        quicksort(begin, p);
        quicksort(p, end);
    }
}

intIt partition(intIt begin, intIt end) {
    int pivot = (end - 1)[0];
    //int pivot = begin[0];// verkar fastna om första elementet är det minsta
    auto i = begin - 1;
    auto j = end;

    while(true) {
        do {i++;} while(i[0] < pivot);
        do {j--;} while(j[0] > pivot);
        if(i >= j) return i; // wikipedia säger j, men det blir fel om man gör så
        std::swap(i[0], j[0]);
    }
}

intIt med_of_three_partition(intIt begin, intIt end) {

    auto mid = begin + std::distance(begin, end)/2;
    if(mid[0] < begin[0]) {std::swap(begin, mid);}
    if((end-1)[0] < begin[0]) {std::swap(begin, end);}
    if(mid[0] < (end-1)[0]) {std::swap(mid, end);}

    int pivot = (end - 1)[0];

    auto i = begin - 1;
    auto j = end;

    while(true) {
        do {i++;} while(i[0] < pivot);
        do {j--;} while(j[0] > pivot);
        if(i >= j) return i;
        std::swap(i[0], j[0]);
    }
}
