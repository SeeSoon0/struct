#define CATCH_CONFIG_MAIN
#include "Catch2/catch.hpp"
#include "Seminar3/quick_sort.h"
TEST_CASE("quick_sort 1") {
    int unsorted[] = { 64, 34, 25, 12, 22, 11, 90 };
    int n = sizeof(unsorted) / sizeof(unsorted[0]);

    int sorted[] = { 11, 12, 22, 25, 34, 64, 90 };

    quick_sort(unsorted, 0, n - 1);
    bool arraysMatch = true;
    for (int i = 0; i < n; i++) {
        if (unsorted[i] != sorted[i]) {
            arraysMatch = false;
            break;
        }
    }

    REQUIRE(arraysMatch);

    // Add more test cases as needed
}
TEST_CASE("quick_sort 2") {
    int unsorted[] = { -5, 2, -9, 1, 5, 6 };
    int n = sizeof(unsorted) / sizeof(unsorted[0]);

    int sorted[] = { -9, -5, 1, 2, 5, 6 };

    quick_sort(unsorted, 0, n - 1);

    bool arraysMatch = true;
    for (int i = 0; i < n; i++) {
        if (unsorted[i] != sorted[i]) {
            arraysMatch = false;
            break;
        }
    }

    REQUIRE(arraysMatch);
}
TEST_CASE("quick_sort 3") {
    int unsorted[] = { 1, 1, 1, 1, 1, 1 };
    int n = sizeof(unsorted) / sizeof(unsorted[0]);

    int sorted[] = { 1, 1, 1, 1, 1, 1 };

    quick_sort(unsorted, 0, n - 1);

    bool arraysMatch = true;
    for (int i = 0; i < n; i++) {
        if (unsorted[i] != sorted[i]) {
            arraysMatch = false;
            break;
        }
    }

    REQUIRE(arraysMatch);
}