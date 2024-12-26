#include "Catch2/catch.hpp"
#include "Seminar3/shell_sort.h"
TEST_CASE("shell_sort 1") {
    int unsorted[] = { 64, 34, 25, 12, 22, 11, 90 };
    int n = sizeof(unsorted) / sizeof(unsorted[0]);

    int sorted[] = { 11, 12, 22, 25, 34, 64, 90 };

    shell_sort(unsorted, n - 1);
    bool arraysMatch = true;
    for (int i = 0; i < n; i++) {
        if (unsorted[i] != sorted[i]) {
            arraysMatch = false;
            break;
        }
    }

    REQUIRE(arraysMatch);


}
TEST_CASE("shell_sort 2") {
    int unsorted[] = { -5, 2, -9, 1, 5, 6 };
    int n = sizeof(unsorted) / sizeof(unsorted[0]);

    int sorted[] = { -9, -5, 1, 2, 5, 6 };

    shell_sort(unsorted, n - 1);

    bool arraysMatch = true;
    for (int i = 0; i < n; i++) {
        if (unsorted[i] != sorted[i]) {
            arraysMatch = false;
            break;
        }
    }

    REQUIRE(arraysMatch);
}
TEST_CASE("shell_sort 3") {
    int unsorted[] = { 1, 1, 1, 1, 1, 1 };
    int n = sizeof(unsorted) / sizeof(unsorted[0]);

    int sorted[] = { 1, 1, 1, 1, 1, 1 };

    shell_sort(unsorted, n - 1);

    bool arraysMatch = true;
    for (int i = 0; i < n; i++) {
        if (unsorted[i] != sorted[i]) {
            arraysMatch = false;
            break;
        }
    }

    REQUIRE(arraysMatch);
}