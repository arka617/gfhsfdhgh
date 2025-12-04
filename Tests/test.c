#include <stdio.h>
#include <assert.h>

// Function declaration from main.c
int sum(int a, int b);

int main() {
    // Test cases
    assert(sum(2, 3) == 5);
    assert(sum(-1, 1) == 0);
    assert(sum(0, 0) == 0);

    printf("All tests passed!\n");
    return 0;
}
